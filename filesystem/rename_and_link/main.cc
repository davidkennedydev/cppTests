#include <filesystem>
#include <iostream>

void AppendSuffixAndLink(std::filesystem::path directory,
                         std::string starts_with, std::string ends_with,
                         std::string suffix) {
  namespace fs = std::filesystem;
  auto previous_direcotry = fs::current_path();
  fs::current_path(directory);
  for (fs::directory_entry file : fs::directory_iterator(".")) {
    std::string name = file.path().filename();
    if (file.is_regular_file() && name.find(starts_with) == 0 &&
        name.rfind(ends_with) == name.size() - ends_with.size()) {
      name.append(suffix);

      auto old_name = file.path();
      file.replace_filename(name);
      fs::rename(old_name, file);
      fs::create_symlink(file, old_name);
    }
  }

  fs::current_path(previous_direcotry);
}

int main(void) {
  AppendSuffixAndLink("./test", "this", ".xx", ".1.2.3");
  return 0;
}

std::string removeExclamationMarks(std::string str){
  std::string new_text;

  for (char& c : str){
    if (c != '!')
        {
            new_text+=c;
        }
  }

  return new_text;
}
#ifndef UNIQUE_H
#define UNIQUE_H

#include <vector>

namespace uforia{

  std::vector<std::string> unique(std::vector<std::string> vec){
    std::vector<std::string> buffer;
    for(int i = 0; i < vec.size(); ++i){
        bool in_buffer = false;
        std::string line = vec[i];
        if(i == 0){
            buffer.push_back(line);
          }
        for(int j = 0; j < buffer.size(); ++j){
            std::string buffered = buffer[j];
            if(line == buffered){
                in_buffer = true;
                break;
              }
          }
        if(!in_buffer){
            buffer.push_back(line);
          }
      }
    return buffer;
  }
}

#endif // UNIQUE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int toGeneralTime(string time_string){
    
    string my_string = time_string;
    
    int hour = stoi(my_string.substr(0,2));
    int min = stoi(my_string.substr(3,2));
    
    int returnVal = (hour * 60) + min;
    return returnVal;
}

string toGeneralString(int x){
    
    string retval = "";
    int hour = x / 60;
    int min = x % 60;
    
    if ((hour / 10) < 1){
        retval += "0";
    }
    retval += to_string(hour);
    retval += ":";
    if((min / 10) < 1){
        retval += "0";
    }
    retval += to_string(min);
    
    return retval;
}


string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    int count = commands.size();
    int posInt = toGeneralTime(pos);
    int startInt = toGeneralTime(op_start);
    int endInt = toGeneralTime(op_end);
    int videoLen = toGeneralTime(video_len);
    
    // cout << "명령어 개수" << count << endl;
    // cout << "최초 시간" << posInt << endl;
    // cout << "오프닝 시작시간" << startInt << endl;
    // cout << "오프닝 엔딩시간" << endInt << endl;
    // cout << "동영상 길이" <<  videoLen << endl;
    
    if ((startInt <= posInt) && (posInt <= endInt)){
        posInt = endInt;
    }
    //오프닝건너뛰기 완료
    // cout << "건너뛰기 이후시간" << posInt << endl;
    
    for (int i = 0 ; i < count ; i++){
        string cmd;
        cmd = commands.at(i);
        
        if (cmd == "next"){
            posInt += 10;
            
            if (posInt >= videoLen) posInt = videoLen;
            
        }else{
            posInt -= 10;
            if (posInt < 0) posInt = 0;
        }
        
        //자동건너뛰기
        if ((startInt <= posInt) && (posInt <= endInt)){
        posInt = endInt;
    }
    }
    // cout << "명령적용 이후 시간" << posInt << endl;
    // cout << toGeneralString(posInt);
    string answer = toGeneralString(posInt);
    return answer;
}
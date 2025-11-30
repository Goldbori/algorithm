#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    // string::replace
    // replace(pos, len, str)
    // pos 위치부터 len 문자 삭제 후 str로 대체 (길이가 달라도 자동 조정됨)
    my_string.replace(s, overwrite_string.size(), overwrite_string);
    return my_string;
}

/*
◎ string.replace() 핵심 정리
1) replace(pos, len, str)
2) replace(iterator first, iterator last, str)
3) replace(pos, len, const char*)

◎ pos+len이 원본 길이를 넘어가도 crash 안 남.
◎ replace는 원본 string을 in-place로 수정함.
◎ insert + erase 조합으로도 동일 동작 가능.
◎ 문자열 길이는 size() 또는 length().
*/

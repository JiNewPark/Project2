#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1,stat2;
struct tm *time1, *time2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void) 
{
    filestat1();
    filestat2();
    filetime1();
    filetime2();
    sizecmp();
    blockcmp();
    datecmp();
    timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(void)
{
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(void)
{
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(void)
{
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(void)
{
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(void)
{
    
    // if(stat("./text1", &stat1) == -1) {
    //     perror("Error occurred while reading filestat of text1");  
    // }

    // if(stat("./text2", &stat2) == -1) {
    //     perror("Error occurred while reading filestat of text2");  
    // }
    printf("size compare\n");
    if(stat1.st_size > stat2.st_size)
        printf("text1 is bigger\n");
    else if(stat1.st_size < stat2.st_size)
        printf("text2 is bigger\n");
    else
        printf("sizes are equal\n");
    return;

}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(void)
{
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(void)
{
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(void)
{
}

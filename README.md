# Adress-Sanitizer
 > Address Sanitizer

Visual Studio 2019 버전 16.4 부터 실험적인 구성요소로 AddressSantizer(Asan) 을 지원 됩니다.<br>
**(실험인 상태로 현재는 x86 release 모드에서만 지원 가능 한 상태입니다.)

## Feature
> 해제 후 사용(현수 포인터 참조) <br> 
> 힙 버퍼 오버플로 <br>
> 스택 버퍼 오버플로 <br>
> 반환 후 사용 <br>
> 범위 지정 후 사용 <br>
> 초기화 순서 버그 <br>

ASan에서 오류를 감지하면 실행이 즉시 중지됩니다. 디버거에서 ASan 지원 프로그램을 실행하는 경우 오류 유형, 메모리 주소 및 오류가 발생한 원본 파일의 위치를 설명하는 메시지가 표시됩니다.

## Config
 > visual studio 2019 mvsc, release , option /fsanitize=address <br>
<p><p>

<img src="https://github.com/cepiloth/Adress-Sanitizer/blob/master/img/vs_address.png"><br>
<img src="https://github.com/cepiloth/Adress-Sanitizer/blob/master/img/vs_config.png"><br>

## Usage
> buffer overflow <br>
<img src="https://github.com/cepiloth/Adress-Sanitizer/blob/master/img/buffer_overflow.png"><br>
```c
#include<stdio.h>
int main(void)
{
    int *ch = new int[100];
    ch[100] = 1;
    return 0;
}
```

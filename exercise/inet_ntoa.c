#include<stdio.h>
#include<arpa/inet.h>

int main()
{	
/*
	- sin_family : 주소체계 (AF_INET/AF_INET6/AF_LOCAL)
	- sin_port : 16비트 포트정보 (네트워크 바이트 순서[big endian] 적용)
	- sin_addr : 32비트 IP 정보 (네트워크 바이트 순서[big endian] 적용)
	- sin_zero : 사용되지 않는 필드
	- sockaddr_in 구조체의 멤버 변수인 sin_addr은 in_addr 구조체로 선언되어 있습니다. 그리고 in_addr 구조체는 s_addr이라는 멤버 변수를 가지고 있습니다.
*/
	struct sockaddr_in addr1, addr2;
	char *str;
	
	addr1.sin_addr.s_addr=htonl(0x1020304);
	addr2.sin_addr.s_addr=htonl(0x1010101);

	str=inet_ntoa(addr1.sin_addr);

	printf("x.x.x.x convert[1] %s\n",str);

	str=inet_ntoa(addr2.sin_addr);

	printf("x.x.x.x convert[2] %s\n",str);
}

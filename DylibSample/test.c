//
//  test.c
//  DylibSample
//
//  Created by ByungChen Moon on 20/11/2018.
//  Copyright © 2018 ByungChen Moon. All rights reserved.
//

#include "test.h"

extern void mymod( int x );

int Test() {
    //    SRTSOCKET sock = srt_socket(AF_INET, SOCK_DGRAM, 0);
    
    //     int st = srt_connect(sock, (sockaddr*)&sa, sizeof sa);
    //CreateAddrInet("127.0.0.1", 999);
    
    mymod(3);
    
    return 99;
}

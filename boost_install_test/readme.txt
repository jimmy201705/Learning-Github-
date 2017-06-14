boost库安装方法

1. 解压: tar zxvf boost_1_64_0.tar.bz2
2. 进入: boost_1_64_0 文件夹
3. 运行shell脚本: bash ./bootstrap.sh  生成b2执行文件。
4. 安装: ./b2 install
5. 默认情况下，boost库文件在: /usr/local/lib
              boost头文件在: /usr/local/include/boost
6. 测试boost的官方代码在: boost_install_test.cpp
7. 测试方法: 调用c++编译器编译代码,编译成功，则表示我们已经安装成功。
            g++ -I /usr/local/include/ boost_install_test.cpp -o test.o -L /usr/local/lib/ -lboost_regex

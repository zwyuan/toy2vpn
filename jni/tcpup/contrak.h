#ifndef _TCP_CONTRAK_
#define _TCP_CONTRAK_

int tcp_reset_fill(unsigned char *buf, unsigned char *packet, size_t length);
int tcpup_reset_fill(unsigned char *buf, unsigned char *packet, size_t length);

int translate_up2ip(unsigned char *buf, size_t size, unsigned char *packet, size_t length);
int translate_ip2up(unsigned char *buf, size_t size, unsigned char *packet, size_t length);
#endif

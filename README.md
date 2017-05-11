Kernel Module - Explosion
=========================
add following line into /usr/local/etc/pkg/repos/ccucsie.conf :
```
ccucsie: {
    url: "http://distfiles.cs.ccu.edu.tw/pkg/${ABI}/",
    enabled: yes,
}
```

execute:
```
pkg update
```
```
pkg install kmod-explosion
```
```
kldload explosion
```

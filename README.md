Kernel Module - Explosion
=========================
FreeBSD 10.3:
add following line into /usr/local/etc/pkg/repos/ccucsie.conf :
```
ccucsie: {
    url: "http://distfiles.cs.ccu.edu.tw/pkg/103amd64-default/",
    enabled: yes,
}
```

FreeBSD 11.0:
add following line into /usr/local/etc/pkg/repos/ccucsie.conf :
```
ccucsie: {
    url: "http://distfiles.cs.ccu.edu.tw/pkg/110amd64-default/",
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

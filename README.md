
# CryptographyCLI
A command line tool to interact with multiple (and simple) encoding and cryptography algorithms.

## How to use
### base64
```
crypto base64 encode hello that's a text !
```
this will encode "encode hello that's a text !" in base64 and output the result to stdout
```
crypto base64 decode aGVsbG8gdGhhdCdzIGEgdGV4dCAh
```
this will decode "aGVsbG8gdGhhdCdzIGEgdGV4dCAh" and output the result to stdout

### xor
```
crypto xor <key> that's a text !
```
this will encrypt the text using the given key if the text is not encrypted. and it will decrypt the text if the given text is encrypted.


### DES
###### maybe a little cracked because of windows cmd not showing unicode characters.
### Triple DES
###### in progress

## Possibilities
        - crypto base64 (encode/decode) <encoded/plain text>
        - crypto xor <key> <encoded/plain text>
        - crypto des (encrypt/decrypt) <encrypted/plain text>
        - crypto tdes (encrypt/decrypt) <encrypted/plain text>

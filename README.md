
## command

```
// ローカルにダウンロード
$ git clone git@github.com:nari19/bunsan.git

// RPC ファイル自動生成 (例: add)
$ cd ./add
$ rpcgen add.x
$ cc add_client.c add_clnt.c -o AddMain -lnsl
$ cc add_server.c add_svc.c -o AddServer -lnsl

// サーバーの起動
$ ./add_server.c <ip address> (ifconfigで調べる)

// プログラムの実行(別タブでターミナルを開く)
$ ./add_client.c remote 
 
```

## note

macで実行する場合にかぎり、以下のエラーがでる.
[参考](https://qiita.com/aframeworks-blog/items/db45373e1ccb3c32fae3)

 `error: linker command failed with exit code 1`

 デバックは見る限り、めんどくさそうなので、Redhudでの実行がいいかも
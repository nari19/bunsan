
## command

```
// ローカルにダウンロード
$ git clone git@github.com:nari19/bunsan.git

// プロジェクトに移動
$ cd bunsan/

// RPC ファイル自動生成 (例: add)
$ cd add/
$ rpcgen add.x
$ cc add_client.c add_clnt.c -o -lnsl
$ cc add_server.c add_svc.c -o -lnsl

// サーバーの起動
$ ./add_server.c

// プログラムの実行(別タブでターミナルを開く)
$ ./add_client.c 172.16.164.34 2 5
// => 7
 
```

## note

macで実行する場合にかぎり、以下のエラーがでる.
[参考](https://qiita.com/aframeworks-blog/items/db45373e1ccb3c32fae3)

 `error: linker command failed with exit code 1`

 デバックは見る限り、めんどくさそうなので、redhadでの実行がいいかも

## command

```
// ローカルにダウンロード
$ git clone https://github.com/nari19/bunsan.git

// プロジェクトに移動
$ cd bunsan/

// RPC ファイル自動生成 (例: calc)
$ cd calc/
$ rpcgen calc.x
$ cc calc_client.c calc_clnt.c -o calc_client -lnsl
$ cc calc_server.c calc_svc.c -o calc_server -lnsl

// サーバーの起動
$ ./calc_server

// プログラムの実行(別タブでターミナルを開く)
$ ./calc_client 172.16.164.39 6 2
// => 7
// => 3
// => 10
// => 7
 
```

## note

macで実行する場合にかぎり、以下のエラーがでる.
[参考](https://qiita.com/aframeworks-blog/items/db45373e1ccb3c32fae3)

 `error: linker command failed with exit code 1`

 デバックは見る限り、めんどくさそうなので、redhadでの実行がいいかも
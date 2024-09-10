= アジャイルは反復してナンボ！

//flushright{
松永 広明
//}

== アジャイルとはなんぞや？
まずアジャイルとはなんぞや？というところから考察してみたいと思います。

アジャイル宣言を紐解くと、こんなことが書いてあります。

//quote{
@<strong>{「計画に従うことよりも変化への対応を」}
//}

また、同じくアジャイル宣言12の原則には次のような記述もあります。

//quote{
「顧客満足を最優先し、価値のあるソフトウェアを早く継続的に提供します」

「動くソフトウェアを、2〜3週間から2〜3ヵ月というできるだけ短い時間間隔でリリースします」
//}

今や2〜3ヵ月を「短い時間間隔」といってしまうのは議論ありそうですが、そこは20年も前の話ですので置いておくとして、つまりここに書かれていることは、図に示すと〓図番号〓のようなイメージです。

//image[image1][アジャイルの代表的なプロセス][scale=1.0]

言葉で言い換えるなら、価値を見定めつつ、定期的にインクリメントをリリースしてフィードバックを獲得し、それを反映してさらなる価値を付加したインクリメントをリリースし、これを繰り返す。@<b>{つまり反復することでプロダクトの価値を高め続けること}（〓図２〓）、これがアジャイルの価値であり、原則であるといっているわけです。

//image[image2][従来開発型とアジャイル開発における価値の推移][scale=1.0]

一方で、例えばウォーターフォールのような従来型の進め方では、開発が進むにつれて価値が高まっていきますが、その間にも新しいテクノロジーの発明や目新しいUXの創造などにより市場はどんどん変化していくため、プロダクトの価値は徐々に劣化していくことになります（〓図12.2〓左）。

== 「反復」とは何か
人間は「反復」によって多くの技能を獲得します。スポーツでも習字でも音楽でもそうですが、反復練習なくして上手になることはありません。そして、反復周期は短いほど、つまり頻度が高いほど一般に練習の効果は高いです。例えば、年に1回ピアノを弾いたってなかなか上達はしません。しかし週に1回、できれば毎日練習すると、上達はずいぶん早くなることは、想像に難くありません。

そして、アジャイル開発においては、反復がうまく行っていることを示す最も重要な指標は、毎回のイテレーション（スプリント）でチームがなんらかの価値あるインクリメントを完成させていることです。ソフトウェア開発においては、価値あるインクリメントとは@<b>{デモができるインクリメント}のことです。逆に、顧客への実動作デモができないなら、それは顧客価値があるとはいえません。なぜなら、実際に動作するところを確認できないと、顧客はそのソフトウェアに価値があるかどうかの判断ができないからです。また、価値判断が出来ないということは、フィードバックを返すことができないということでもあり、つまりここでフィードバックループは途切れてしまい、〓図12.1〓や〓図12.2〓のような、アジャイルの重要な特徴の実現が難しくなってしまうのです。

逆にいうと、イテレーションを何回も繰り返さないとデモ可能なアウトプットを出せないチームは、反復がうまく行っていない可能性が高く、これはすなわちアジャイル開発がうまくいっていない可能性が非常に高いといえます。

== 「反復」なきアジャイル





ところが、最近よく見る自称「アジャイル」は〓図12.3〓のようなものが多いです。

一応イテレーション（スプリント）は一定周期で区切っているし、スクラムイベントも定期的にやってる（たぶん）のですが、聡明な本書の読者ならすぐにお気づきなのではと思いますが、これはアジャイルではないですよね。はい、おっしゃる通りです。これは「アジャイルに見える」だけの単なるウォーターフォールですね。プロダクトのリリースは最後の１回だけですし、フィードバックなんてどこにも取り込んでないし、価値を高めてもいない。でも残念ながらこういう似非アジャイルが巷にあふれているのは事実です。

この方法では反復はまったく機能していません。例えばゴルフのスイングを練習するには、自分のスイングを動画に撮って、1回～数回振るごとにビデオをチェックし、良くないところを直してまたクラブを振る、というフィードバックループを繰り返すことが効果的なのですが、〓図12.3〓の方法では、そのループが回っていません。つまり、〓図12.3〓のような状態は、何かを習得するには非常に不利な状態といえます。


//image[image3][残念なアジャイル（アジャイルではない）][scale=0.5]





この状態に陥っているチームは、プロダクト開発そのもの以外もうまく行きません。なぜなら、前述したとおり人間は反復によって技能を習得するからです。例えば、心理的安全性にしても、自己組織化にしても、Ｔ字型スキルにしても、「反復（イテレーション）」をする中で徐々に習得されていくものだからです。

つまり、このままの状態では、スプリントの回数を重ねても反復効果が出づらく、したがってチームやプロセスやプロダクトに改善を期待することが難しくなります。改善のためには根本原因にリーチする必要があります。

ではなぜこうなるのか？原因はプロダクトバックログ作りにあります。

== プロダクトバックログは「プロダクト」のバックログ

プロダクトバックログは、その名の通り「プロダクト」の「バックログ」です。何がいいたいかというと、プロダクトバックログアイテム（PBI）は、プロダクトを分解したものである必要があるということです。プロダクトバックログアイテムは、そのひとつずつが何らかの「価値」を顧客やユーザーに提供できなくてはなりません。「価値」というのは、例えばユーザーが意識的あるいは無意識的に抱えている何らかの問題を解決するとか、新しいことができるようになるとか、今まで以上にお金が儲かるようになるとか、そういうことです。

この分割方法は、よくケーキにも例えられます。よく知られたメタファなので、ここでは解説しません。知らない方は調べてみてください。すぐにたくさんの記事が見つかると思います。

そうして分割されたプロダクトバックログが実際に作られ、リリースされることで顧客やユーザーは実際にそれを使ってみることができるようになり、使ってみて初めてフィードバックを返すことができるようになるわけです。〓図12.3〓のようなやり方だと、開発序盤から中盤までは、例えば要件定義書や設計書を見せるのが関の山で、これでは顧客からのフィードバックを得るのはほとんど不可能です。そりゃそうですよね、例えばカメラの要件定義書を見せて、「このカメラ使いやすいですか？」「画質はどうですか？」などと聞かれたって答えようがありません。

== プロダクトバックログはToDoリストではない
前述のような似非アジャイルになっているチームのバックログをみてみると、バックログアイテムは、例えば次のようになっていたりします。

 * ○○システムのデータフローをレビューする
 * 撮影画像確認画面の設計をする
 * ユーザープロファイル確認画面についてデザイン部と合意する

どうでしょうか？これらはそれ単体でユーザーに価値をもたらすでしょうか。「データフローのレビュー」はユーザーにどんな価値がありますか？画面デザインへの合意は、顧客のどんな問題を解決するでしょうか。これらは、それ単体では価値とはならず、その他の多くの作業がつながって初めて何かの価値を生むような作りになっています。

これを図に示すと〓図番号〓のようになります。つまり、プロダクトをいきなりタスクに分解しているわけです。前述の通り、タスクはそれ単体では価値とはならないため、顧客にリリースすることはできません。これは単なるToDoリストであり、プロダクトバックログではありません。このような作り方をすると、すべてのタスクが完了するまでプロダクトはリリース出来ません。こういう開発のやり方をなんと呼ぶかというと、そうです、ウォーターフォールと呼ぶわけですね。


//image[image4][プロダクトをタスクに分解している][scale=0.6]



//image[image5][プロダクトバックログはToDoリストではない][scale=0.5]

== 小さな価値とは

一方で、次のようなバックログアイテムはどうでしょう？

 * 通知ボタンを押下すると「通知ＯＮ」ランプが点灯する。
 * チャットボタンを押下するとチャットウインドウが開く。

これらは、機能としてはとても小さなものに過ぎませんが、それ単体で十分な価値があります。通知がＯＮになっているかＯＦＦになっているかは、ユーザーにとってそれなりに重要な情報です。プロダクトバックログアイテム（PBI）は単体ではこのような@<b>{小さな価値}が提供できれば十分なのです。

これを図にすると〓図12.6〓のようになります。

この図ではプロダクトを一旦小さなプロダクト（＝価値のあるもの）に分解しています。それは小さいが故にシンプルで、すなわち早く完成でき、早くリリースでき、その価値はすぐにフィードバックを得ることができるのです。必要があれば、これらの小さなプロダクト（バックログアイテム）をさらに小さなタスク（＝作業）に分解してもよいでしょう。


//image[image6][プロダクトをより小さなプロダクトに分割している][scale=0.5]


つまり、こういったかたちでプロダクトバックログをうまく作ることができれば、反復はうまく回るようになるのがわかると思います。反復がうまく回り始めれば、本線のプロダクト開発だけでなく、チームの改善もうまくいくようになり、さらにその効果でプロダクト開発がよりうまくいくというループが回るようになるのです。

実は、プロダクトバックログ作りは初めてアジャイルに取り組むチームが最初にぶつかる壁のひとつです。〓図12.4〓に示したアンチパターン以外にも、プロダクトバックログアイテムのサイズが大きすぎて、完成までに1ヵ月～数ヵ月かかるというのもよく見かけます。インクリメントが付加する価値は、前述したように「ボタンを押すとランプが点く」ぐらいの、本当に小さなもので良いのです。試してみてください。

== まとめ
 * 人間は反復によって技能を獲得する
 * 反復がうまく回らないと開発そのものもプロセスの改善もうまくいかない
 * 反復するためには、プロダクトバックログアイテムは、「プロダクト」を分割したものである必要がある
 * プロダクトバックログアイテムにはToDoリストではない
 * プロダクトバックログアイテムは本当に小さな価値で良い
 * アジャイル開発において、反復がうまく行っている最も重要な指標は、毎回のイテレーション（スプリント）でデモができることである

上手にプロダクトバックログを作って、反復を回していきましょう！

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-matsunaga/matsunaga.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        松永 広明 @qoragile https://twitter.com/lsaconsul\\
        LSA CONSULTiNG株式会社　代表取締役
        \end{minipage}
    \hspace{1ex}
//}

https://www.facebook.com/lsaconsul

https://www.linkedin.com/in/lsaconsulting/

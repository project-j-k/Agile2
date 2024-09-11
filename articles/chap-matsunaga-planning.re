= 経験主義にもとづく計画の立て方

//flushright{
松永広明
//}

== 計画はなんのためにするのか？

みなさんはどんなときに計画しますか。仕事のときはもちろんしますが、私生活においても、例えば旅行に行くときなどに計画をしますよね？ちょっと大きめのお金を使うときや、貯めるときなどにも計画することが多いと思います。

ではなぜ人は計画するんでしょうね？ちょっと30秒ほど考えてみてください。


考えましたか？

答えは、「不確実性を（可能な限り）排除するため」です。例えば旅行の計画では、確実に目的地に着いて、そこでさまざまなアクティビティを十分楽しむために計画を立てるわけですね。

これを念頭に次のことを読んでみてください。

== 予実が乖離するのは計画がまちがっていたから
一般的にアジャイルでは「予実管理」をしません。予実管理というのは、ものごとが計画（予定）どおりに行ったかどうかを管理するという考え方ですが、アジャイルで予実管理をしないのは、ものごとが計画どおりにいかない理由は、計画がまちがっていたからに決まっていると考えるからです。

計画に実績を合わせるのは従来型の計画主義の考え方です。一方アジャイルは経験主義なので、過去の実績に合わせて計画を立てます。

みなさんはどちらが正しいと思いますか？あるいはどちらが好きですか？

アジャイルが経験主義の立場を採る理由は、人間には未来を正確に予知する能力はない、ゆえに未来は不確実だ、と考えているからです。ましてや計画に実績を一致させようとする試みは、天気予報に合うように今日の天気を変えろといっているようなもので、非合理としかいいようがないというわけです。なので、経験主義においては、実績が計画と乖離することは別に大した問題ではありません。乖離したなら、次からは計画のほうを適応させればよいからです。もう一度書きますが、予実が乖離するときは、計画のほうがまちがっていたのです。

== 計画主義による計画の立て方
例えばスクラムにおいて、スプリントプランニングで今から取り組むスプリントバックログのスコープを決定する場合を例にとって、計画主義と経験主義のちがいを図にしてみましょう。

例えばスクラムでスプリントプランニングを行うとして、もし、計画主義の考え方でスプリントのスコープを計画するとしたら、〓図番号〓のようになるでしょう。

計画主義では計画が正しいと考えるので、1スプリントで55ポイントやると決めたら、チームはその計画を達成できるように仕事を進めていくことになります。最初は計画どおりに行かなくても、徐々に改善して計画を達成出来るようにするわけです。計画主義に慣れている方はこの考え方になんの違和感も抱かないんじゃないかと思います。

//image[image1][計画主義による計画の立て方][scale=1.0]


しかし、前述の例だとスプリントを重ねるごとに徐々に改善はしているものの、まだ一度も計画を達成した（予定どおりに進んだ）ことがなく、このまま未達が続けばそろそろステークホルダーからのプレッシャーがかかってきそうです。チームはそのうちプレッシャーに負けて、見積もりそのものを不正に操作して（大きめに見積もる）、計画を達成したように見せかけるようになるかもしれません。

また、もしかしたらチームは、計画を達成するために残業することを選ぶかも知れません。が、残業して計画を達成しても、残業をすることになった原因が解消されたわけではないので、次のスプリントも残業することになり、チームは慢性的な残業体質に陥ってしまうでしょう。

いずれの場合も、このやり方はチームの実態を表しておらず、スクラムで重要とされる「透明性」が崩壊する危機といえます。

== 経験主義による計画の立て方
一方で経験主義では、過去の実績にもとづいて計画を立てます。つまり、前回はこのやり方でうまくいったから、今回も同じやり方でだいたいうまくいくだろう、と考えるわけです。

まず、Sprint nでは、チームは55ポイントと計画しましたが、実際には40ポイントしか達成できませんでした。なので、次のスプリントでは、過去の実績にもとづいて40ポイントと計画します。このとき何かしらの改善施策は入れておくようにします。そうしてこのスプリントでは、改善施策が功を奏して、チームは計画を超える42ポイントを達成しました。なので次のスプリントでは42ポイントと計画します。これを繰り返して、常に実績に合わせて計画を立てるようにしていきます@<fn>{planning}。

//image[image2][経験主義による計画の立て方][scale=1.0]


//footnote[planning][実際には過去3回のスプリントの実績を平均したものを次のスプリントの計画とすることが多いようです。]

こちらのやり方では、毎回のように計画を超える実績を出せているため、チームのモチベーションはアガりっぱなしになります。ステークホルダーも大喜びです。

注目してほしいのは、このケースの場合計画主義でも経験主義でもでも出した実績はまったく同じということです。にもかかわらず、チームのモチベーションには大きく差が出ます。モチベーションのちがいは、そのうち大きな実績のちがいとして現れてくるでしょう。

== 見積もりの精度が上がらない？
最後に、計画に不可欠な「見積もり」についてです。計画主義の考え方では、計画をより確かなものにするため、見積もりの精度を上げようとします。つまり見積もりと実績とを比較して、その差がなるべくゼロに近づくような取り組みをするわけです。が、これも実際にはあまり意味がないのでやめたほうがよいでしょう。理由は前述のとおり、人間には未来を正確に予知する能力はないからです。

相対見積もりを採用している場合はさらに意味がありません。なぜなら、相対見積もりは大きさの比であり、例えば工数÷工数、あるいは時間÷時間などといった計算をすることになるので、見積もられた数値は無次元数（単位がない）になるからです。単位のないものは測定できないため、予実の比較ができず、従って精度の計算もできません。「相対見積もりが難しい」「どうしても時間見積もりになってしまう」といっているチームは、この罠にハマっていることが多いようです。

まとめます。

 * 計画を立てることは、不確実性を（極力）排除することが目的
 * アジャイル開発においては、未来は不確実と考えるため計画を絶対視しない
 * 計画主義においては計画に実績を合わせようとするが、経験主義においては実績にもとづいて計画を行う
 * 未来は不確実なので、見積もりの精度を高めようとする取り組みはほとんど意味がない

　

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

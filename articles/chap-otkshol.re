= インセプションデッキからはじめる　アジャイル入門

//flushright{
おたけ@otkshol
//}

== はじめに

本章では、朝会などの定期的に開催されている開発イベントの目的を答えることができなかったことをきっかけに、アジャイル開発と初めて向き合った話を共有します。

インセプションデッキという言葉も知らなかった状態から、チームに必要なことを考え、カイゼンをスタートさせることができました。
筆者と同じようにアジャイルに初めて向き合い、初めて悩んでいる方にとっての何かの参考になれば幸いです。

== 開発チームに新規着任

昨年、筆者はプロダクトのバッチ開発担当から別の新しい開発チームにアサインされました。5名のチームに対して、筆者を含めた3名の新規着任、サブリーダー相当の方が1名離任するという規模の大きいメンバー入れ替えが発生したタイミングでの着任になります。

新しい開発チームでは「スクラムガイド」@<fn>{scrumguides}にあるスクラムイベントに相当する開発イベントが開催されており、「しっかりアジャイルっぽいことをやっているチームですごいな。」というのが正直な感想でした。

初めての案件実施時には、疑問に思ったことをSlackに書き込むと、答えられる人に回答をすぐもらったり、必要に応じて通話をつないでサクッと解決したり、しかもその動きをチーム全員で補い合っており、「なんてよいチームに来たんだ！」と感じていました。

しかし、上司は「メンバーの大量入れ替えにともない、チームの文化とスタンス部分を心配している」といっていました。チームに特に問題を感じていなかった筆者は、その言葉の真意を理解することができませんでした。なお、〓表14.1〓は、筆者の開発チームでの開発イベントの呼び方を、一般的なスクラムイベントの呼び方に対応させた表です。呼び方そのものは本質的なものではないかもしれませんが、その目的が必ずしも共有、一致していなかったのかもしれません。

//table[devevents][スクラムイベントと開発イベントの対応]{
スクラムイベント	筆者の開発チームでの呼び方
-------------------------------------------------------------
スプリントプランニング		開発見積もり会
デイリースクラム 	朝会
スプリントレビュー		レビュー会
スプリントレトロスペクティブ	開発ふりかえり
//}

//footnote[scrumguides][@<href>{https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-Japanese.pdf, https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-Japanese.pdf}]

== 朝会の目的……？

ある日、いつもどおり開催されている朝会に上司がふらっとやってきて、一通り終わったあとに「朝会ってなんでやっているんだっけ？もしかしたらもう少し短くできるかも」と筆者とチームリーダーに質問しました。しかし、筆者もチームリーダーも、その質問に明確に答えることはできませんでした。

この質問に答えられないということは、毎日行われている朝会が、実施されてはいるがなんのために行っているのか誰もわからない恐ろしい状況であるということ。それをこのタイミングで初めて認識しました。

朝会は「日々の作業内容を報告すればよいのかな」とぼんやり思っていましたが、進捗状況を共有する理由、朝会で話すべき話題など、会議体として重要な項目が明確でないまま運用されている現状がそこにはありました。

目的や内容がはっきりしていないので、作業進捗共有の流れから話題が逸れて議論が発散してしまい、朝会そのものに時間がかかってしまうことも多々ありました。朝会は開発メンバー全員が出席しており、かなり多くの工数をさいています。筆者には、本当にかけた工数の価値がある時間になっているか、自信を持ってYESと答えることができませんでした。

== インセプションデッキとの出会い
このままではよくないことは理解できましたが、どうやって現状を打破できるか途方に暮れていました。そんな筆者に対して、上司は「インセプションデッキ的な何かをチームで取り組んだほうがよいかもね」という助言をくれました。その助言を聞いた筆者は「なるほど、わからん」状態でしたので、その言葉の意味を調べ、書籍「アジャイルサムライ-達人開発者への道」（オーム社、2011）にたどり着きました。

インセプションデッキ@<fn>{inceptiondeck}とは10個の質問から構成されるプロジェクト開始前に認識を合わせておきたい内容で、5つの「Why」と5つの「How」の合計10個の質問から構成されるものです。主にプロジェクトチーム発足時に使用されるものですが、多くのチームメンバーが入れ替わったチームにも適用可能だと思いました。

しかし、10個の質問すべてに取り組もうとすると膨大な時間がかかり、今のチームには必ずしも取り組む必要がない質問もあると感じました。そこで、チームリーダーともインセプションデッキの実施とその内容を議論を行いました。その結果、開発チームのキックオフを対面開催し、その中でインセプションデッキの1つである「我々はなぜここにいるのか？」に取り組むことを決めました。

//table[10questions][インセプションデッキ10個の質問]{
1. 我々はなぜここにいるのか？
2. エレベーターピッチ
3. パッケージデザイン
4. やらないことリスト
5. 「ご近所さん」を探せ
6. 技術的な解決案を描く
7. 夜も眠れない問題
8. 期間を見極める
9. トレードオフスライダー
10. 何がどれだけ必要か
//}

//footnote[inceptiondeck][インセプションデッキのテンプレート　@<href>{https://github.com/agile-samurai-ja/support/tree/master/blank-inception-deck, https://github.com/agile-samurai-ja/support/tree/master/blank-inception-deck}]

== チーム対面キックオフと得られたもの

事前に出社日を調整して開発チームキックオフを対面開催しました。午前中はキックオフを行い、午後から「我々はなぜここにいるのか」を開発チームで実施しました。議論は白熱して、半日以上の時間をかけてメンバー全員で合意した回答をまとめることができました。

「我々はなぜここにいるのか」に答えることによって、開発メンバー全員で合意したチーム目標ができあがり、新しい施策や既存の施策の目的を議論するときのチームが立ち返る場所ができました。

個人的な収穫もありました。「我々はなぜここにいるのか」を議論するとき、やったことのないファシリテーション役に挑戦してみましたが、意外とやってみればなんとかなることを学びました。同時に、悩んでいる様子や喜んでいる様子が表に出すぎる性質があるので、ファシリテーションをするときは議論の進める邪魔にならない程度に、もう少し感情コントロールができるとよりよいという課題も自覚することができました。普段の業務でファシリテーションスキルと向き合う機会があまりなかったので、貴重な経験になりました。

そして、初めて対面したチームメンバーとお昼に美味しいラーメンを一緒に食べた絆も手に入れることができました（嬉しすぎて卵をためらうことなくトッピングして、いつもより豪華にした）。

//image[kickoff][キックオフ時のホワイトボードの様子][scale=0.7]

== キックオフのその後
インセプションデッキのおかげで、開発メンバー全員でチーム目標を決めることができました。しかし、これはスタート地点に立ったにすぎません。

現在は、いつの間にか目的が明確でなくなってしまっていた定例イベントの目的を開発チームふりかえりの時間を使って少しずつ見直しを進めています。今まで当たり前のようにすごしていたイベントの目的をあらためて考えるので、そう簡単に議論が進まないのが正直なところです。

しかし、今の我々には立ち返るチーム目標があるので、議論が発散しそうになったり、判断に迷ったときはチーム目標に立ち返り、着実に議論を進めることができるようになりました。これは大きな一歩なのではないかと思います。

チーム全員が定例開発イベントの目的がいえること、その目的がメンバー間で相違がないこと、必要に応じて柔軟にアップデートできることを目指して今日もカイゼンに取り組んで参ります。

== まとめ
今回のできごとで初めてアジャイル開発と向き合い、目の前のチームに必要なものは何かを考え、もがきながら実践する貴重な経験をすることができました。次は文化を吹き込む側となって開発チームのアウトカムを最大化させて、プロダクトを使っている方々、チームメイトの役に立てるようになりたいです。

もし、筆者と同じようになんとなく朝会など定期イベントは実施しているけど「なんでやっている？」という質問に答えられない、あるいはチームメンバーで回答バラバラな状況であれば、まずはインセプションデッキの「我々はなぜここにいるのか」だけでも時間をかけて考えることをおすすめします。チームの拠り所ができて、以降の議論がスムーズになると思います。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-otkshol/otkshol.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        竹内尊紀 @otkshol https://twitter.com/otkshol\\
        \end{minipage}
    \hspace{1ex}
//}

株式会社リクルートに新卒入社。HR領域の開発を主に担当し、現在はタウンワークの開発に携わっている。
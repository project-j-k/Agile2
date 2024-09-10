= 関係の質を改善させるためにやってよかった12のこと

//flushright{
小糸　悠平 （@koito）
//}

== はじめに
私は長年受託アジャイル（最近では共創アジャイルと呼ぶことも多いですが）のプロジェクトに携わってきました。共創アジャイルを実践してきた中で、アジャイル開発において組織・チーム・人との関係性がプロダクトの成功に極めて重要であるということに気づきました。

Daniel Kim氏によって提唱された成功循環モデル@<fn>{theory-of-success}では、
最初から成果（@<strong>{結果の質}）を求めようとするとチームが直接的な数字作りに走り、チーム内に摩擦や対立が生まれ（@<strong>{関係の質}の悪化）、
心理的安全性が確保されず（@<strong>{思考の質}の悪化）、行動が消極的になり（@<strong>{行動の質}の悪化）、さらに結果が悪くなる（@<strong>{結果の質}の悪化）
という@<strong>{失敗の循環}"が生まれると述べられています。

反対に、"@<strong>{成功の循環}"として、チームの関係性が良くなることから着手する（@<strong>{関係の質}の向上）と、
考え方が前向きになることで多くのメンバによる気づきが生まれ（@<strong>{思考の質}の向上）、
チームの積極的・自律的な行動につながり（@<strong>{行動の質}の向上）、成果が生まれる（@<strong>{結果の質}の向上）。
成果が生まれることでますます関係性が良くなる（@<strong>{関係の質}の更なる向上）と述べられています。

//footnote[theory-of-success][成功の循環 https://www.humanvalue.co.jp/keywords/theory-of-success/]

プロダクトを成功に導くために、前述のように多くの関係が必要となります。
顧客と開発チームが密接に連携し、透明性とコミュニケーションを重視することで、より良い製品を迅速に提供することが可能となります。
また、チーム内外の信頼関係と協力体制はプロダクトの成功に不可欠です。
フィードバックを受け入れ改善を続けることで組織全体が成長し、より高い成果を生み出すことができるでしょう。

//image[seikou][成功の循環][scale=0.6]

 * 顧客と一緒に本当に必要とするものについて考えられる関係
 * 開発者が顧客に必要なものを正しく理解できる関係
 * 開発したものに対し顧客にフィードバックをもらえる関係
 * チームの活動をサポートし、モチベーションを高められる関係
 * 問題が発生したときにオープンに話し合い、迅速に解決できる関係
 * チームメンバー同士が信頼し合い、協力して課題に取り組む関係、
 * 継続的な改善を追求し、成長し続ける関係



本章では、私が実際に取り組んで効果のあった関係性向上の手法を、チーム内およびチーム外の2つの視点から紹介します。すべての組織に適用できるわけではありませんので、各組織の状況に応じて判断していただければと思います。

== チーム内の良い関係性の作り方
次はチーム内の関係性を改善するために実施した取り組みです。

==== やってよかったこと1：スクラムの勉強会を定期開催する
 * 内容：
 ** チーム立ち上げ直後は、1スプリントに1時間くらいかけてスクラムについての勉強会を実施しました。
 ** これまで実施してきたテーマは次のようなものがあります。
 *** 直近のスプリントで発生した事象に対するケーススタディ
 *** スクラム関連書籍の読書会
 *** スクラム関連イベントの動画鑑賞　などなど
 *** ワークショップの実施
 * 効果：
 ** チームのスクラムへの理解度が一定の水準となり、議論の冒頭にチーム全員の認識を合わせる時間が減少します。これにより議論の本質に時間をさけるようになります。
 ** メンバが知識を得ることでエンゲージメント向上にもつながります。

==== やってよかったこと2：競合システムの勉強会を開催する
 * 内容：
 ** チームが開発するプロダクトに競合製品がある場合は、その製品を皆で触って意見を交換する時間を設けました。みんなで画面を操作し気づいたことを言い合い、
 自分たちのプロダクトの価値向上につながるものはPBIに追加していくというものです。
 * 効果：
 ** POとチームが対等な立場で意見を交換できるので距離が縮まります。
 ** 皆で意見を共有することでチームの一体感が強くなります。
 ** POがビジョンを共有しやすくなります。
 ** サービスへの理解が深まり、チーム内の認識齟齬が減ります。

==== やってよかったこと3：PBIをチームみんなで作る
 * 内容：
 ** 私たちのチームでは、立ち上げ時こそユーザストーリーマッピングを皆で検討したのですが、それ以降は何となくPOがユーザストーリーを考える人、開発者が開発する人というように、役割が決められてしまいました。その結果徐々にPOと開発者の関係が遠くなっていくのを感じたので、POにはPBIの完成度の低い（エピック単位までしか検討していない）状態でリファインメントに挑んでもらうことにしました。
 ** リファインメントの中で、エピック単位のユーザストーリーマッピングを作成するワークを行いました。
 * 効果：
 ** チームでワークをすることで一体感が強くなります。
 ** POの負荷が下がり、開発メンバとのコミュニケーションの時間が確保出来るようになります。
 ** POがチームメンバを信頼して任せるようになります。

==== やってよかったこと4：（早く小さく）失敗してみる
 * 内容：
 ** スプリントゴールを意図的に高く設定し、失敗を経験するようにします。
 4スプリントに1回くらいの頻度で実施しました。

 * 効果：
 ** 失敗を経験することで、「失敗しても大丈夫」という心理的安全性が高まり、挑戦する雰囲気が生まれます。
 ** ふりかえりのディスカッションが活発になり、改善のアイデアが多く生まれます。
 ** ステークホルダーがチームの状況に興味を持ち、特にマネージャーはチームの状況をよく見るようになります。

==== やってよかったこと5：サービスを使ってもらっているところを見る
 * 内容：
 ** サービスイン後、利用者が使っているところを見学し、関係者とプロダクトの価値向上のためのワークを行いました。

 * 効果：
 ** ステークホルダとの距離が縮まります。
 ** チームのプロダクトへの思い入れが強くなり、価値を高める議論が活性化されます。
 ** 今後の開発に向けての意思統一が図れます。

==== やってよかったこと6：メンバが順番にイベントを欠席する
 * 内容：
 ** チームメンバが順番に休む（休暇を取らない場合でもその日はスクラムチームに関わらない）。

 * 効果：
 ** なんでも知っているメンバがいなくなるので、お互いに質問する環境ができる
 ** 誰かに依存することなく、チームメンバ全員が自分の意見を発信するようになります。
 ** 休んだメンバが翌日以降第三者視点でおかしな点に気づき指摘することができます。

==== やってよかったこと7：スプリントごとに小さな変化を入れる
 * 内容：
 ** 同じ状況が続くと、チームのメンバは飽きてきてしまうので、スプリントチームごとに変化を与えてみました。
 ** これまでやってみた内容
 *** メンバの入れ替え（スクラムマスター⇆開発者の入替、複数チームであればチーム間でスクラムマスターを入替）
 *** スクラムマスターがスクラムイベントに参加しない
 *** スクラムイベントにゲストを招く
 * 効果：
 ** チームが変化に適応するためにチーム内の会話が増えます。
 ** 変化に強いチームが出来ます。

== チーム外（ステークホルダー）とのよい関係性の作り方
プロダクトの成功には、チームを支える顧客やステークホルダーとの良好な関係が欠かせません。
ステークホルダーとの関係性は、会社や組織の状況による差異が大きいため、抽象的な表現になりますがご理解ください。

==== やってよかったこと1：ステークホルダーそれぞれの関心ごとを明確にする
 * 内容：
 ** ステークホルダーと一口にいっても、開発部門長、事業部門長、企画、セールス、カスタマーサポートなど多岐にわたります。それぞれがプロダクト、チームに対して異なる期待や関心を持っています。
 ** 誰が何に興味を持っているのかを整理し、その関心内容に応じてステークホルダーをチームから適切な距離にいてもらうことが重要です。
 ** 〓図10.2〓のイメージのように一覧に整理しました。

//image[image1][ステークホルダーの関心整理][scale=0.6]

 * 効果：
 ** ステークホルダーそれぞれの興味ある内容が明確になり、誰と何を調整すれば良いかがわかります。
 ** ステークホルダーとの効果的なコミュニケーションが可能になります。

==== やってよかったこと9：ステークホルダーの必要十分なイベントを設定する
 * 内容：
 ** ステークホルダーの関心ごとを整理したあと、ステークホルダーの参加するイベント/参加しなくてもよいイベントを決定しました@<fn>[comment]。
 ** 〓図10.3〓がイメージです。適切なスクラムイベントがない場合は、スクラムイベントに無理に参加してもらうわけではなく別の場を設けました。
 スプリントレビューの参加者はスプリントプランニングの時点で参加者を決定し、ステークホルダーに伝えることで早めに予定を確定させていました。

//image[image2][ステークホルダーの必要十分なイベントを設定する][scale=0.6]

 * 効果：
 ** 各ステークホルダーにとって必要十分なイベントだけに参加するため、リソースが無駄になりません。
 ** ステークホルダーがイベントで求められることが明確なため、発言数が増加し、プロダクト・チームへの関心が高まります。
 ** イベント参加率が向上し、ステークホルダーが無理なくプロダクト・チームと関わることができます。 

//footnote[comment][もちろん、スプリントレビューなどのイベントには誰でも参加して良いのですが、初期はステークホルダー自身がチームとどう関わっていいか判断に悩むことが多いため、こちらから必須のイベントを指定する方式としました。]

==== やってよかったこと10：スタートダッシュを成功させる
 * 内容：
 ** ステークホルダーの中にはアジャイル開発に懐疑的な方やネガティブな感情を持つ方もいます。共創アジャイルの場合、私たちの会社の開発力にも懸念を持つ方もいます。この状態で序盤に開発が躓くと、ネガティブな印象を持たれやすくなります。
 ** キックオフから最初の1ヵ月が重要で、そこでの成否がその後の関係性に大きな影響を与えます。結果を見せることが一番の方法です。
 ** 具体的には次のような行動をしていました。
 *** スプリントが始まる前のチームビルディング：ステークホルダーや開発者を雑談やイベント（ちょっとした外出など）に連れ出し、メンバ間の顔合わせや価値感を探ります。
 *** 1ヵ月で動くソフトウェアを見せることが難しい場合、チームビルディングより優先します。

 * 効果：
 ** ステークホルダーがチーム、プロダクトに対してポジティブな感情になります。
 ** それにより、チームの活動に協力的になり以降の開発がし易くなります。

==== やってよかったこと11：スプリントレビューを好きになってもらう
 * 内容：
 ** スプリントレビューはプロダクトの検査と適応を行う場です。スプリントレビューに対するステークホルダーの熱量を高めるために次の工夫をしました。
 ** ワクワクするシナリオの検討
 *** 実際の利用イメージを持てるようにユースケースに沿ったシナリオを考えました。
 ** フィードバックがすぐに実装される経験
 *** POと相談し、ステークホルダーからのフィードバックを優先的に提供しました。

 * 効果：
 ** フィードバックがすぐにかたちになるので、ステークホルダーがレビューを好きになり、議論が活性化します。

==== やってよかったこと12：イケてない状態を早期に曝け出す
 * 内容：
 ** 「やってよかったこと10 スタートダッシュを成功させる」と反対の話になりますが、うまくいっていない状態も積極的に共有することでステークホルダーに味方になってもらい関係性を良くすることができます。
 ** スプリントゴールの未達や、リリースバーンダウンの芳しくない状況、チームが抱えている課題などの透明性を高めるだけでなく、それに対して議論する場を作りチームと一緒に考えられる環境を作っていきましょう。
 * 効果： 
 ** 早い段階での課題共有により、ステークホルダーと一緒に解決策を考えることができます。


== まとめ
結果を出し続けられるチームを作るためには、チーム内/外、両方の関係の質を上げていく必要があります。

今回、12のアイデアを紹介しましたが、皆さんのチームで実行している関係の質を向上させるためのアイデアについて
情報交換させていただき、より良いチーム作りにつなげていければいいなと思っております。

　
-----------------------

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-koito/koito_photo.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        \begin{verbatim}
        小糸 悠平（Yuhei Koito） https://twitter.com/koito_yuhei
        \end{verbatim}
        \end{minipage}
    \hspace{1ex}
//}

KDDIアジャイル開発センター株式会社でアプリやWebサイト開発のスクラムマスターをやりながら、
社内スクラムコミュニティを運営し組織内にスクラムを広げる活動中。

モットーは、”自分と自分の周りの人が幸せで居続けられるように行動する”。
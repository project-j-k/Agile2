= アジャイルの始め方 - 続け方

//flushright{
砂田 文宏 @orinbou
//}

== はじめに

この章は、すでにバリバリと濃いアジャイルを実践している人には当たり前の内容かもしれません。むしろ、次のような境遇の人に読んでいただき、何かヒントになるものが得られれば嬉しいです。

　

@<strong>{想定する対象読者（読んでほしい人）}

 * 過去アジャイルに取り組んでみたけれど、うまくいかなかった人
 * 現在アジャイルに取り組んでいるけれど、うまくいっていない人
 * これからアジャイルに取り組もうとしているけれど、どう始めたらいいかわからない人
 
== アジャイルとの出会い

「今よりもっとうまくソフトウェアを開発したい」「価値あるソフトウェアを利用者に届けたい」ソフトウェア開発を志す人ならば、一度はそんなことを考えたことがあるのではないでしょうか？

実際にそんなことができたら本当にどんなに素晴らしいことでしょう。でも現実は厳しく、「誰が」「いつ」「どんな目的で」決めたのかよく分からない開発ルールという枠組みの中で、あまり役に立たないと感じながらも「でもそういう規則だから…」と、渋々あるいは必死に不合理と戦って苦しんでいるケースも未だに多いかもしれません。

そんな状況に耐えかねてソフトウェア開発から逃亡しようと画策しました。しかし、幸か不幸か2008年の秋に発生したリーマンショックで、初めての「転職」という名の逃亡が見事に失敗したあと、生きる（食いつなぐ）ために不本意ながら再びソフトウェア開発の仕事へ戻ることにしました。日々の作業に追われる中、2012年頃たまたま本屋で目にして手に取ったのが書籍『アジャイルサムライ ― 達人開発者への道』（オーム社,2011）でした。今から遡ること遥か10年以上も前のことです。衝撃的な内容に興奮して一気に読み終え、気になった部分を蛍光ペンでマーキングし、ふせんを貼りまくったことを今でも覚えています。

== 初めてのアジャイル開発

当時景気が悪かったことが幸いし、アサイン先がなく社内で浮いていた人員を活用して、自社サービスのプロトタイプを開発するというプロジェクトが立ち上がりました。『アジャイルサムライ』を読んでアジャイル熱に浮かされていた筆者にとって、これは千載一遇のチャンスでした。「アジャイル開発でやらせてください！」と上司に懇願して、何とか受け入れてもらいました。そして「約2週間のスプリントごとに動くソフトウェアを届けます！」と（実際できるかどうかわかりませんでしたが）約束しました。その当時のプロジェクト開始時のチームの体制は、〓図3.1〓のようなものでした。

//image[image2][プロジェクト開始時のチームの体制][scale=0.6]

当時の私のアジャイルのインプットは、『アジャイルサムライ』とネットを漁って調べた情報だけでした。とにかくアジャイルだかスクラムだかもよく分からないまま手探りで始めました。まず最初にやったこと（プラクティス）は次の3つでした。

 * 朝会（デイリースクラム）
 * スプリント（約2週間）
 * ふりかえり（レトロスペクティブ）

「たったこれだけ？」と思うかもしれませんが、たったこれだけでも序盤からいきなり躓きまくりました。まず、朝会が時間どおりに始まりません。上司に声をかけられたプロダクトオーナー（以下、「PO」と呼ぶ）が、頻繁に朝会をスキップしてきました。さらに、確かに合意したはずの「スプリント開始時のWIP制限@<fn>{wip}」を無視して、どんどんと追加タスクを積んできました。プラクティスが理解されず、乱れるリズム。つのるイライラ。駄々下がる開発者のモチベーション。

万事こんな調子で、序盤は思った以上に思ったようには進みませんでした。加えて、私の相棒である若手開発者が「僕は過去をふりかえらない男なので」と、頑なにふりかえりを拒否したりもしました。新しいことを始める場合は「たったこれだけ？」のことでも本当に大変だと感じました。

//footnote[wip][WIP制限：進行中の作業(Work in progress)の量を制限すること。同時進行できる作業量を制限することで、タスクの切り替えに伴う無駄を省いたり、一つのタスクに集中することで早く完了することが期待できます。また、早く完了することにより、フィードバックが増えたり品質が向上することが期待できます。]

== 地道な改善

序盤の躓きもあり、アジャイルごっこにもなっていない状況で何度も挫折しかけました。しかし、相棒に懇願して何とか「ふりかえり」を継続してもらい、地道な改善を続けたことでなんとか継続することができました。当時実践してみて効果を感じられた改善例をいくつかご紹介します。

　

@<strong>{・ご近所さん（プロジェクト関係者）の見える化}

そもそも共通の目的に向かうワンチームとしての意識が希薄で、目先の利害が一致せず、不穏な空気になる場面が何度もありました。また、チームに影響を与えるステークホルダーの認識も人それぞれで、議論が空中戦になってしまうことも一度や二度ではありませんでした。そこで、『アジャイルサムライ』のインセプションデッキを参考に、「ご近所さんを探せ」を行い、ステークホルダーを含めたプロジェクト関係者を洗い出しました。さらにその図を壁に貼り出して、自分たちが同じチームメンバーとだということを視覚的に認識できるようにしました。こうすることで、チームとして共通の課題と対峙し、解決に向けて建設的な協力がしやすくなりました。また、協力しやすい空気が醸成されたことにより、スプリントの途中で開発中のソフトウェアを開発者が積極的に披露して、より素早いフィードバックを得ることも可能になりました。

　

@<strong>{・バックログの種類をプロダクト用とスプリント用に分けて管理}

見様見真似で始めたこともあり、序盤はバックログの粒度もかなり混沌としていました。POや営業や広報は、ビジネス価値が関心ごとの中心です。一方で、開発者は、ビジネス価値を生み出すために必要な具体的な作業が関心ごとの中心になります。このように、観点や粒度が異なるバックログが混在し、かつ、膨大な数になっていったことで、徐々に管理が煩雑になっていきました。その結果、作業状況の確認やフォローも難しくなり、デイリースクラムの時間もどんどん長くなっていきました。そこで、バックログを次のように明確に区別して管理することにしました。

 * プロダクトバックログ：
 ** ビジネス価値（利用者にとっての価値）を実現する単位

 * スプリントバックログ：
 ** プロダクトバックログをスプリントで実現するため具体的な作業に細分化した単位

こうすることで、POや営業や広報は「プロダクトバックログ」だけを気にすればよくなります。また、開発者は、「プロダクトバックログ」を理解しつつ、それを実現するための具体的な作業として「スプリントバックログ」を意識的に利用できるようになりました。このように、バックログの種類を分けて管理するようにしてからは、管理の煩雑さがかなり軽減されました。また、以前よくあったPOのマイクロマネジメント（細かなタスク単位の指示）もかなり減ったように思います。

　

地道な改善を継続的にコツコツと続けて、その効果が実感できるようになってくると、チームメンバーの意識も少しずつ変わっていきました。自称「過去をふりかえらない男」を明言していた若手開発者が、あるときふいに @<strong>{「環境って自分たちで変えられるものなんですね。僕、知りませんでした」} といってくれました。
この言葉を聞いて私も少し救われた気持ちになりました。それ以来、彼は社内の特別な協力者になり、社内勉強会の企画や社外コミュニティでの発表など、ことあるごとに積極的に協力してくれるようになりました。その後、彼と共に成功も失敗も数多く経験することになるのですが、それまでと決定的にちがったのは、彼の協力がなかった頃と比べて、社内あるいはプロジェクトで新しいことを試すまでに要する時間が圧倒的に短くなったことでした。

== 学んだこと

変革を推し進めるためにはリーダー（先達）が必要だということは、誰しも認めるところだと思います。しかし、リーダー独りだけではものごとはなかなか思ったようには進みません。変革の取り組みを支持してくれる最初の協力者（以下、「ファーストフォロワー」と呼ぶ）がたった一人居てくれるだけで、新しい取り組みに対する推進力がまったくちがってきます。さらに2人なら、失敗も最高の「ふりかえり」のネタ（むしろ宝物）として前向きにとらえることができるようになり、一人では躊躇して（人知れず）諦めてしまうようなケースも激減します。

このように、変革の取り組みを支持するファーストフォロワーが存在することで、最初は突飛に見えるような取り組みにも信憑性が生まれ、多くの人たちが参加するきっかけとなり、やがて大きな変革へとつながっていくことがあります。このしくみについて、アメリカの起業家デレク・シヴァーズ（Derek Sivers）氏が2010年のTEDカンファレンス『社会運動はどうやって起こすか（How to start a movement）』@<fn>{ted}で分かりやすく解説してくれています。まさにこれは、私がアジャイルを実践していく中で学んだことそのものでした。

//footnote[ted][https://www.ted.com/talks/derek_sivers_how_to_start_a_movement/ TEDカンファレンス2010 『社会運動はどうやって起こすか（How to start a movement）』 ]

== その後の現場で

その後もさまざまな困難に遭遇しましたが「ファーストフォロワー」を見つけて、まず「二人」から始めることで、私なりのアジャイルな取り組みを続けることができました。

=== エピソード１：前職の現場にて

客先に常駐して、顧客側のエンジニアと自社エンジニアで混成チームを組んでGIS系アプリケーションを開発する現場でした。開発の人手がたりないということで、私は3ヵ月の期間限定の助っ人としてプロジェクトへ送り込まれたはずなのですが、なぜか2年以上そこで過ごすことになりました。その現場で取り組んだエピソードを少しだけご紹介します。

　

@<strong>{Step1：若手エンジニアと「二人」で朝会を始める}

派遣先の現場で若手エンジニア（顧客）と二人で朝会を始めました。毎週ふりかえりを実施して継続的な改善を続けたことで、他のチームから注目されるようになりました。最終的に当時の現場の全チーム（3チーム）に朝会とふりかえりが定着しました。

　

@<strong>{Step2：シニアエンジニアと「二人」で勉強会へ参加する}

アジャイルに興味を持ってくれた派遣先のシニアエンジニア（顧客）を誘って二人で社外の勉強会へ参加しました。勉強会で得た気づきや知見を糧（肴）に、あるべき姿や目指すべき方向について何度も話し合いました。一緒にさまざまな試みを行いましたが、例えばコミュニティのツテで社外講師を招聘して、チームやエンジニアに向けた勉強会を開催したりもしました。改善の一環でJenkinsを導入し、これまで手動だったビルドやインストーラー作成などの定型作業を自動化して、エンジニアの作業負荷やストレスを低減しました。また、人的ミスによる不具合も大幅に減らすことができました。

=== エピソード２：現職の現場にて

その後転職して現職にいたるのですが、とある受託開発プロジェクトで開発リーダーを担うことになりました。若手エンジニアが中心の数名規模の小さいチームでの開発だったため、これまで培ったアジャイル開発の知見が活かせそうだなと感じ、若手エンジニアたちへそのエッセンスを伝えながら開発を進めていました。

　

@<strong>{Step1：担当プロジェクトで若手エンジニアと「二人」でスクラムを画策}

アジャイル開発やスクラムの魅力や勘所など伝えたあと、スクラムに興味を持ってくれた若手エンジニと一緒に「なんちゃってスクラム」を始めて、筆者がスクラムマスターの役割を担いました。あえて「なんちゃって」と称して最初の心理的な導入ハードルを下げて実施しました。とはいえ、まったくの骨抜きになっては元も子もないので、厳格ではないものの勘所はおさえるように注意しながら開発を進めました。

　

@<strong>{Step2：プロジェクトマネージャーと「二人」で顧客にスクラムを提案}

「なんちゃってスクラム」の進め方や成果に興味を持ってくれたプロジェクトマネージャーと協力して、顧客に対してスクラムでの開発を提案することにしました。スクラムの利点や顧客に担ってもらいたい役割などを提案書にまとめて客先でプレゼンしたところ、幸運にも受け入れてもらえました。その後の開発の中では、それなりにいろいろなことがありましたが、最終的にはしっかりと顧客へ価値を届けることができたと思います。

　

@<strong>{Step3：社内でアジャイルを推進する役割を「2人」で担う}

最近では社内へアジャイル開発を推進・啓蒙する役割（CoE：Center of Excellence）を担っています。かつてのアジャイルコミュニティで知り合った仲間が偶然同じ会社に（しかも驚くべきことにほぼ同じタイミングで）入社してきたこともあり、ここ数年は二人三脚で支え合いながら活動に取り組んでいます。

== これから始める人へ

正しいアジャイルやスクラムなのかどうかを気にし過ぎないでほしいと思います。

確かに「アジャイルソフトウェア開発宣言」やXP（Extreme Programming）やスクラムなどの原則や価値を理解することは重要だと思います。しかし。ものごとはすべてゼロイチで割り切れるほど単純ではありません。理想と現実の間でバランスを取りながら実践し学び続けていくことがより重要だと私は考えています。「そんなの本当のアジャイルじゃない」なんて、誰かからいわれても、どうか歩みを止めないでください。


日本におけるアジャイル開発の第一人者の平鍋健児氏も、かつて「アジャイルなんて今の仕事で使えないじゃん！」といわれる境遇に陥ったことがあるそうです。そんなとき「今の仕事を今よりも良くすることはできる」という言葉に救われ、アジャイルに拘り過ぎることをやめ、アジャイルの要素を使って「いきいきとした仕事がしたい」「お客さんと喜び合える仕事がしたい」という気持ちに切り替えて改善や工夫を続けたそうです。私もその言葉には何度も救われてきました。このエピソードはAgile Japan 2016の基調講演で語られていますので、よかったら次の記事も読んでみてください（筆者が過去に執筆した記事です）。

https://www.manaslink.com/articles/15011

== おわりに

これまでアジャイルを学び、拙いながら実践し続けてこれたのは、そのときどきでよき協力者に恵まれたことが最大の要因だったと考えています。与えられた境遇の中で「ファーストフォロワー」を見つけて、まず「二人」から始めることで今日までアジャイルを実践し続けることができました。運もあるかもしれませんが、自分の意志で前進し、試行錯誤してあがき続けて困っていると、不思議と良いフォロワーに出会えることが多かったように思います。社内だけでなく、社外のコミュニティなどでも、助けてくれるフォロワーがきっと居ると思います。そう信じて、まずは最初のフォロワーを見つけて「二人」からアジャイルを始めてみてはいかがでしょうか。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-orinbou/orinbou.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        砂田　文宏（すなだ　ふみひろ） @orinbou https://twitter.com/orinbou\\
        ブログ：https://blog.orinbou.info/
        \end{minipage}
    \hspace{1ex}
//}


認定スクラムマスター（CSM）/ 認定スクラムプロダクトオーナー（CSPO）

株式会社ビッグツリーテクノロジー＆コンサルティング（通称：BTC）でテックリードやスクラムマスターなどを生業としています。
社内へアジャイル開発を啓蒙するべく Agility CoE メンバーとしても奮闘中です。
AWS（SAP、DOP）とk8s（KCNA、CKA、CKAD、CKS）チョットデキル。
趣味はゆるキャンプ△とサイクリング。

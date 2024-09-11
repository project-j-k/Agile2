= アジャイルの実践

//flushright{
    amixedcolor/エイミ（保 龍児）
//}

この章では、アジャイルの実践として、アジャイルであるために用いられるいくつかのフレームワークや手法を解説します。決してこれらがアジャイルにおけるすべてではありませんが、アジャイルを実践するうえでそれをイメージする助けになることを目的としています。また、陥りやすいポイントや重要なポイントにおいて必要に応じて補足し、本書で得たキーワードをもとに実践できる姿勢を整えます。第一歩というよりは、歩き始める前に「よーいドン」の「よーい」をしていただけるように執筆しております。

この章をどう使うかについては、もし読んでみてわからない単語や解説が多ければ、各節のタイトルを覚えていただき、アジャイルについて経験し学びを進めていく中で、その節の名前が出てきたときに立ち返ってみてください。何が重要だと書かれていたのかをあらためて読み、実践につなげることができるでしょう。そうではなく、なんとなく理解して読み進めることができたり、すでに実践していることがあれば、自分が想像していたものと何かちがうところはないか、実践している中で書かれているものとちがうところはないか、自分の理解と異なるところを意識して読んでみてください。この解説があなたの状況に必ずフィットするわけではありませんが、筆者の考えるポイントや概要と異なるところがあれば、その点について一考し、改善できる余地があるかもしれません。

この章のまえがきとして最後に、アジャイルを実践するうえでのマインドについて記します。そのマインドとは、アジャイルを実践する方法もアジャイルに改善していくというものです。型に則るだけでなく、自分たちに合った型を探していくこともアジャイルに行ってみてください。筆者は筆者なりの考えを持って執筆しておりますが、アジャイルを実践する方法は多くあり、同じ名称でも解説やポイントが異なることがあります。アジャイルを実践するうえで、知った方法をやってみるだけでなく、ぜひその方法を改善できないか考えてみてください。改善するうえでは、その方法が目的とするものや、実現したいことに立ち返ってみてください。実はチームでやってみているときに、型に則ることが最適ではないかもしれません。逆に、チームでやってみていることが型から外れすぎて、目的を達成しにくくなっているかもしれません。チームにとって、価値のあるプロダクトを提供することのできる、よりよい方法で実践できるように、アジャイルにふりかえり調整してみてください。

== アイデアを出す

プロダクト開発をするうえで、まず初めには必ずアイデアから始まります。アジャイルを実践するうえで、第一歩となるアイデアの出す方法について筆者の経験したいくつかを紹介します。

=== カスタマージャーニーマップ

カスタマージャーニーマップとは、一言で表した困りごとに対し、ペルソナを定めて、各フェーズごとに行動、関わるものや場所、思考や感情などもあわせて書いていくというものです。困りごとを解決したいという前提がある中で、ユーザーの解決前の体験に焦点を当てて書き、イメージしやすくすることで「本当に課題があるのはどの部分の体験なのか」の目星をつけます。


このときのポイントが2つあります。1つ目は、最初に一言で表現した困りごとは、必ずしもユーザーの解決したいことの本質ではないということ。2つ目は、困りごとを解決する手段を前提にしないことです。前者については、カスタマージャーニーマップを客観的に書くことで、実は困りごとだと思っている「ここ」が、実は別の時系列にあるものが本質で、そこから派生した困りごとであるケースがあります。後者については、手段ありきのカスタマージャーニーマップになってしまうことで、困りごとの本質に気づかず、今ある説を補強するだけになってしまうことがあります。この2つのポイントをおさえてカスタマージャーニーマップを書いていくことが、良質なアイデアを出す基盤になります。


とはいえ、特に2つ目にあるように手段ありきで考えてしまいやすいことが多いです。そんなときに便利な、The Job Story Formatというものがあります。まずはカスタマージャーニーマップを一通り書いてから、困っていそうなポイントを複数あげます。それぞれのポイントにおいて、①それはどんな場面で、②ユーザーは何をしたいのか、③それをしたいのは何ができるからなのか、を書くことでユーザーが達成したい仕事を明確にします。困りごととその解決策への先入観のある状態から少し離れて、ユーザーが特定の場面では何をしたいのか、何ができるからそれをしたいのかと、具体的かつ客観的にユーザーのニーズを見極めます。

=== リーンキャンバス

リーンキャンバスとは、フォーマットに沿ってアイデアを書き出しながらそのアイデアを検証するというものです。すでに何かしらのアイデアがある前提で、そのアイデアをブラッシュアップしていくことに用いられます。その過程でアイデアが大きく転換する可能性もあります。

//image[leancanvas][リーンキャンバスのフォーマット][scale=0.8]

https://www.utokyo-ipc.co.jp/column/lean-canvas/より画像を拝借。書き直しお願いします。

これにはいくつかの題目に沿った枠が用意されており、それを埋めていくことで活用します。1番目に顧客セグメントとアーリーアダプター、2番目に課題と既存の代替品、3番目に独自の価値提案を埋めていきます。誰の何をどんな独自性を持って解決したいのかを明確にし、ビジネス面におけるいくつかの事項を考慮に入れます。このとき、ソリューションを何にするかが1つの肝になりますが、ソリューションは次節.1.3で紹介するブレーンライティングを活用してから定めることがおすすめの手段です。

リーンキャンバスについて短く語ることは困難ですが、初めて使用するときはぜひ枠を埋める順番に注意してください。枠が多いためどこから埋めたらよいかわからないといった疑問に対して、本書で書かれている埋め方で埋めることで埋めやすくなるでしょう。

=== ブレインライティング

ブレインライティングとは、フォーマットに沿った用紙をチーム内で回し、前の人と被らないようにしつつ、特定のテーマに沿って発想を派生させたり逆転させたりしてアイデアを出すものです。短い時間制限を設けたうえで行い、1ターンの間にできる限り必ずすべての枠を埋めていき、そのアイデアを捻り出す過程でアイデアが柔軟なものになっていきます。

ブレインストーミングと同様、どんなアイデアでも歓迎され、突拍子のないアイデアからヒントを見つけられる可能性を大きくします。6.1.2で紹介したリーンキャンバスにおいて、今ある課題をテーマにし、そのソリューションについてブレーンライティングをすることも可能です。

== アイデアをかたち作る

アイデアを出しただけでは、実際の開発に進むのは困難です。出したアイデアをかたち作り、磨き上げ、開発に移る準備をしましょう。

もちろん、開発を始めてからもアイデアを検査する必要があります。いわゆるピボットをして、アイデアの方向性を変えることもあるでしょう。この節では、アイデアをかたち作る2つの方法を紹介します。

=== エレベーターピッチ

エレベーターピッチとは、エレベーター内の短時間で上司や役員にアピールしても相手に必要な情報を伝えることのできる、1分程度の短いピッチのことです。さまざま出したアイデアを集約し、シンプルに要点をわかりやすく詰めることで、聴衆がそのアイデアの概要を短時間で把握することができるようにします。

フォーマットを調べると、表現にブレがあり一見するとどのフォーマットがよいかわかりにくいですが、一貫して次の7つを含むことが多いです。

 1. 顧客の望むニーズや課題
 2. 対象顧客
 3. プロジェクトやプロダクトの名称
 4. カテゴリやジャンル
 5. 重要な利点と対価を払う説得力のある理由
 6. 競合
 7. 競合とのちがい
 
 //noindent

これらをつなぐと、次のような文章になります。「①を望む②向けの③は、④です。これは⑤ができ、⑥とはちがって⑦があります。」という文章です。

=== 顧客インタビュー

顧客インタビューは、その名のとおり対象顧客へのインタビューのことです。アイデアをかたち作るうえで、客観的な声を取り入れ、必要な修正を加えながらアイデアを成長させます。

顧客インタビューでのポイントは大きく2つです。1つ目は意見を誘導しないことで、例えば「こういう機能どうですか？」ではなく、「どんな機能が欲しいですか？」と聞くことです。2つ目は得た意見をただすべて取り入れるのではなく、チームでこれは確かにそうだと思ったものや、ユーザーに共通していた意見などを中心に取り入れていくことです。そうすることで素直な意見を集めながら、それでいて意見を全部取り入れて凡庸になることなく進められます。

== スクラム

スクラムは、チームが価値を生み出すための軽量級フレームワークのことです。アジャイルと同様に価値基準が存在し、スクラムの理論にもとづいています。アジャイルであるためによく採用されるフレームワークです。「アジャイルマニフェスト」のように「スクラムガイド」というガイドがあり、初版から数年おきに更新を繰り返しています。ガイドだけでなく、研修・認定資格・多数の本が世に出ています。

この節では、スクラムガイドにおいて定義されている中でも2つ、作成物とイベントについてのみ触れます。スクラムの定義・スクラムの理論・価値基準・スクラムチームについてはほとんど触れておりません。アジャイルの実践として、6.1・6.2で扱ったように、実戦における具体的なことを中心に扱います。

=== スクラムの作成物

スクラムでは3つの作成物が定義されています。

 1. プロダクトバックログ
 2. スプリントバックログ
 3. インクリメント
 

これらの作成物を作成することを通して、プロダクト開発を進めます。この節では、作成物について解説しながら、付随する概念についても触れます。


1つ目の作成物、プロダクトバックログ（以降、PBL）とは、プロダクトと1対1対応で存在し、一意なプロダクトバックログアイテムの優先順位を持っているリストのことです。プロダクトバックログアイテム（以降、PBI）は、PBLを構成する要素のことで、プロダクトの改善に必要なものです。最初期には、プロダクトとして何もない（＝何も価値がない）状態から、「プロダクトとして価値を生むために」必要なものがPBIになります。PBLはプロダクトゴールをもち、プロダクトの将来の状態として、計画におけるターゲットになります。


PBLにおいて特に重要なのはPBIの粒度です。よくない状態として、PBLにあるすべてのPBIが粗い、もしくはすべて細かい状態があります。理想的なのは、上は細かく、下に行けば行くほどだんだん粗くなっている状態です。なぜなら、まだ見通しが聞きやすい直近のPBIを細かい粒度で分割するのは適切でも、見通しが立たないようなまだまだあとに行うPBIを細かくしても、無駄になることが多いからです。また、必要以上に細かくすることは、コストを要するうえに柔軟性を失い易くなります。また、直近のPBIを適切な粒度にすることは「Readyな状態に置く」といいます。Readyな状態とは、誰が見ても迷いなくタスクに分解でき、認識に齟齬も起きない程度の粒度のことです。これにより、そのPBIに期待するプロダクトの価値を実現することをより確実にします。


PBLは定期的に、また随時、メンテナンスされることが望ましいです。そのメンテナンスのことをプロダクトバックログリファインメントと呼びます。リファインメントでは、着手が近いPBIをReadyな状態にしたり、PBLの中でPBIの位置を変更し、優先順位を調整します。


2つ目の作成物、スプリントバックログとは、スプリント中のすべてを集約するもののことです。のちに解説するスプリントプランニングで作成するスプリントゴールや、先ほどのPBLにあるPBIとそれを分解したタスク、そのタスクの状態も、ここに記録されます。


3つ目の作成物、インクリメントとは、1つのPBIのタスクがすべてDONEになり、POによって受け入れられたあとのPBIのことです。プロダクトの改善における踏み石とも呼ばれ、この踏み石を1つ1つ増やし、踏んでいくことでプロダクトがより価値を生むことが期待されます。

=== スクラムイベントとスプリント

スクラムでは5つのイベントも定義されています。

 1. スプリント
 2. スプリントプランニング
 3. デイリースクラム
 4. スプリントレビュー
 5. スプリントレトロスペクティブ


スクラムイベントは、スクラムの作成物の検査と適応をするための公式の機会であり、このイベントを通して作成物を検査し、状況に適応します。スクラムイベントは、複雑さを低減するために、同じタイミングと時間で開催されることが望ましいです。


1つ目のイベント、スプリントとは、スクラムイベントの入れ物となるイベントのことです。これは期間でもあり、定期的なリズムを作るのに用いられます。多くのプロダクト開発では2週間としてスプリントを用意しますが、1ヵ月以内の決まった長さであれば問題ありません。期間を短くすることで、複雑さを低減し、できる限り予測可能な範囲で計画を立てて実行しふりかえります。

=== スプリントプランニング

2つ目のイベント、スプリントプランニングとは、スプリントにおける一番最初のイベントであり、そのスプリントにおける計画を行うイベントのことです。まず初めにスプリントゴールを策定し、それに応じて必要なPBIを選択します。


望ましくないパターンが2つありそれは、①PBIのいくつかを先に選択することが決まっていて、それをまとめたようなスプリントゴールになることと、②スプリントプランニングの時間を超過して、計画する時間を延長してしまうこと、です。①については、PBIがPBLの中で適切な順序に並んでいることを前提としてしまっていて、本来はそうではなく、前回のスプリントのふりかえりも踏まえたうえで、「今この瞬間、次のスプリントでは何を達成すべきなのか」というものをゴールとして設定することが望ましいです。②については、計画が時間内に終わらないのであればそもそもPBIがReadyに状態になっていないことや、あまりにも不確実性が高く計画しきれないため、早く動いたほうがよい状況であることがあります。


この2パターンはどちらも、不確実性の高い中でアジャイルにプロダクトを開発していくために避けたいパターンです。①に陥ると、逐次状況が変わるような不確実性の高い中、前回のPBLリファインメント結果による先入観が入ってしまいます。スプリントプランニングは新しい1日の頭に置かれることが多いですが、それは一時的な先入観から逃れ、できるだけ最適な選択を取るためでもあります。②に陥ると、計画できる状況にない中で、最も計画を手助けする手段といえる、その計画を実施することを妨げてしまいます。また、そのような状況下で計画する時間を長くとっても、状況は好転することが一向にないことが多いです。

=== デイリースクラム

3つ目のイベント、デイリースクラムとは、毎日決まった時間に行われ、スプリントプランニングで計画したタスクを調整しながら、スプリントゴールに対する進捗を検査し、必要に応じてスプリントバックログを適応させるイベントのことです。具体的には例えば、昨日はスプリントゴールのために何を達成したのか、今日は何をスプリントゴールのために貢献する予定なのか、その達成の障害になっているものはないか、確認します。

=== スプリントレビュー

4つ目のイベント、スプリントレビューとは、インクリメントをデモして、さまざまな人からレビューを受ける場であるイベントのことです。このイベントの目的は、スプリントの成果をレビューを通して検査し、今後どう適応するかを決定することです。さまざまな意見が出たときには、顧客インタビューのように、適切にそれらを受け止めてからPBLに反映させます。

=== スプリントレトロスペクティブ

5つ目のイベント、スプリントレトロスペクティブとは、主にスクラムのプロセスとプロダクトに対して改善する方法を計画するイベントのことです。これはよくふりかえりとしてイメージされますが、ふりかえりを通して次の意思決定や行動を改善することが重要です。実際に撮られる手法はとても多く、例えば、アジャイルマニフェストの4つの価値を指標として、その重なりを15象限のベン図にし、プラスとデルタについて記載するような方法もあります。一般的によく用いられているのはKPTやFun Done Learnです。

== アジャイルを実践する

本書の冒頭で触れたように、アジャイルとはやり方ではなくあり方です。この章では、そのあり方を実践するための方法について紹介してきました。再三になりますが、決してこれらの方法だけがすべてでなければ、紹介した方法そのものも記載した解説だけにとどまりません。しかしながらこれらは、アジャイルの実践として鍵となることの多い方法です。特に、最後に紹介したスクラムは、プロダクト開発をアジャイルに行ううえで非常に有用なフレームワークです。ぜひ、本書のキーワードをもとに「よーいドン」の「よーい」をして、「ドン」といつでも一歩目を踏み出せるようにしてみてください。アジャイルを実践する者として、ともに歩む日を楽しみにしております。


//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/amixedcolor.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        amixedcolor/エイミ（保 龍児）\\
		https://twitter.com/amixedcolor
        \end{minipage}
    \hspace{1ex}
//}


株式会社Relic エンジニア

新規事業開発、アジャイル、AWS、完全没入型仮想現実、歌、漫画が好きです。
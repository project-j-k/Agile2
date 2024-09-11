= デザインから逆算して難易度を見積もるための観点

//flushright{
酒井文也（@fumiyasac）
//}

== はじめに

私はこれまで、iOSとAndroidの両方でモバイルアプリ開発を経験してきました。そのなかで、プロジェクトの成功において。デザインをもとに実装の難易度を見積もることがいかに重要であるかを強く実感しています。iOSとAndroidは、それぞれ異なるデザインガイドラインや技術的な要件を持っており、同じ（ように見える）デザインを実装する場合でも、プラットフォームごとに異なるアプローチが必要です。

本記事では、デザインから逆算して難易度を見積もるときに考慮すべき重要な観点について、私の経験を踏まえて解説します。これらの観点をおさえることで、開発チームがデザインと技術的実現性のバランスを取りながら、効率的かつ高品質なアプリを開発するためのヒントを提供できればと思います。

== モバイルアプリ開発において難易度を見積もるときに重要な観点を整理する

モバイルアプリ開発において、デザインから逆算して実装の難易度を正確に見積もることは、プロジェクトの円滑な進行に不可欠です。次の観点を考慮することで、より精度の高い見積もりを実現できます（※プロジェクトの内容や事情によっては、本稿で列挙する観点以外でも重要なポイントとなり得る点はあると思います）。

==== 1. UIコンポーネントの複雑さ

UIコンポーネントの選択は、開発の難易度に大きな影響を与えます。標準のUIコンポーネントで実現できる場合は、開発の手間が軽減されますが、カスタムUIコンポーネントが必要な場合は、実装とテストに時間がかかります。また、アニメーションやレイアウトの複雑さもプロジェクトの進行を左右します。シンプルな遷移や配置よりも、複雑なインタラクションや階層構造を持つデザインのほうが当然必要な工数は多くかかることになります。

==== 2. プラットフォーム間の差異

iOSとAndroidでは、UIガイドラインやプラットフォーム固有の機能にちがいがあります。これらの差異を正しく理解し、両プラットフォームでの一貫性を保ちながら、デザインを適切に実装することが求められます。また、デバイスごとの画面サイズやアスペクト比のちがいにも対応する必要があります。これにより、プラットフォームごとのユーザー体験を最適化し、開発の手戻りを減らすことができます。

==== 3. データフローとステート管理

アプリケーション内のデータフローと状態管理の複雑さも、実装難易度に大きく影響します。単純な画面遷移や状態管理であれば、開発はスムーズに進みますが、複数の依存関係が絡む場合は、慎重な設計とテストが必要です。データの受け渡しや共有の方法を事前に明確にすることで、のちのトラブルを回避できます。

==== 4. パフォーマンスへの影響

アプリのパフォーマンスはユーザー体験を左右するため、リストビューでの大量データの扱いや、画像処理、動画再生などの重い処理を効率的に実装することが求められます。また、バックグラウンド処理やプッシュ通知の実装も、アプリの応答性やバッテリー消費に影響を与えるため、慎重に設計する必要があります。

==== 5. API連携とデータ同期

API連携の複雑さや、オフライン対応の必要性は、開発の難易度に直結します。必要なAPI呼び出しの数やデータの同期方法を事前に計画することで、ネットワークの不安定さやデータの競合を防ぎ、スムーズなデータ同期を実現します。

==== 6. セキュリティ要件

ユーザー認証やデータの暗号化、セキュアなストレージの実装は、アプリのセキュリティを確保するために不可欠です。これらの要件は、実装の複雑さに影響を与えるため、開発の初期段階から考慮する必要があります。

==== 7. アクセシビリティ対応

アプリが多くのユーザーにとって使いやすいものであるためには、アクセシビリティ対応が重要です。色のコントラスト比や音声読み上げ対応、タッチターゲットのサイズなど、アクセシビリティに関する要件を満たすことで、アプリの品質とユーザー満足度を向上させることができます。

==== 8. ローカライゼーション

多言語対応や右から左への表記（RTL）の対応、地域ごとの法的要件や文化的配慮は、グローバル展開を視野に入れたアプリ開発において重要です。これらを適切に考慮することで、さまざまな市場での成功を促進します。

==== 9. テスト容易性

テストの容易性は、プロジェクトの進行に大きな影響を与えます。ユニットテストやUI自動テストの実装しやすさ、エッジケースや異常系のテストシナリオを早期に設計することで、あとのバグ発見や修正を最小限におさえることができます。

==== 10. メンテナンス性と拡張性

コードの再利用性や、将来的な機能追加や変更のしやすさを考慮することは、長期的なプロジェクトの成功に不可欠です。適切なドキュメンテーションを行い、メンテナンス性と拡張性を確保することで、プロジェクトの持続可能性を高めます。

これらの観点を考慮することで、デザインから逆算して実装の難易度をより正確に見積もることができ、プロジェクトの円滑な進行につながります。

== iOS・AndroidそれぞれのUI実装観点からの重要性

私自身はモバイルアプリ開発の中でも、特にUI実装に関連する分野が特に関心が高いです。この点については、20代のときにデザイナーとしてのキャリアを歩んだことも関係していると思います。ゆえにモバイルアプリ開発において、UI実装の観点から見る難易度の見積もりは、プロジェクトの成功に直結する重要な要素であると考えています。

==== 1. コンポーネント単位で見たときの方針選択

UI実装において、標準コンポーネントですむか、カスタム開発が必要かで、工数やリソースの配分が大きく異なります。特に、カスタムUIコンポーネントの実装は、描画処理やタッチイベント処理の複雑さがアプリのパフォーマンスとユーザー体験に直接影響を与えるため、慎重な計画と見積もりが求められます。また、プラットフォーム固有のAPIを適切に活用することで、効率的かつ効果的な実装が可能となります。

==== 2. iOS/Android間における考え方の相違点

iOSとAndroidでは、UIガイドラインやレイアウトエンジン、ナビゲーションパターンなどに大きなちがいがあります。これらの差異を理解し、それぞれのプラットフォームに最適化することが、スムーズな実装と高いユーザー満足度を実現する鍵となります。例えば、iOSとAndroidでは画面遷移の基本的な考え方が異なるため、適切なナビゲーション設計が必要です。

==== 3. カスタムUIコンポーネントの実装

カスタムUIコンポーネントの実装においては、プラットフォームごとの最適化が重要です。描画処理の最適化やタッチイベント処理の複雑さを考慮することで、アプリのパフォーマンスを向上させ、ユーザー体験を高めることができます。また、プラットフォーム固有のAPIを理解し、活用することが、高品質なUIを実現するための重要なステップです。

==== 4. アニメーションとトランジション

複雑なアニメーションやトランジションの実装は、UIの滑らかさとインタラクティブ性を高めるために不可欠です。しかし、その実装には、プラットフォーム固有の最適化テクニックが必要となります。特に、アニメーション設計においては、パフォーマンスを考慮した工夫がユーザー体験の向上に直結します。

==== 5. システムUIとの統合

システムUIとの統合、例えばステータスバーやナビゲーションバーの扱いは、アプリ全体の見た目と操作性に大きな影響を与えます。iOSのエッジスワイプジェスチャーなど、プラットフォーム固有の動作への対応も、実装上の重要なポイントです。

==== 6. アプリのライフサイクルのちがい

iOSとAndroidでは、アプリのライフサイクル、特にバックグラウンド処理やメモリ管理においてちがいがあります。これらのちがいを理解し、適切に対応することで、アプリの安定性と性能を向上させることができます。特に、複雑なアプリケーションでは、これらの要素を無視すると、パフォーマンスの低下やクラッシュの原因となる可能性があります。

これらの観点を踏まえた難易度見積もりは、プロジェクトの計画とリスク管理を大幅に改善します。また、デザイナーとの協業においても、これらの技術的な制約や可能性を共有することで、実装しやすく、かつユーザー体験の高いデザインの創出につながります。結果として、アプリの品質向上と開発効率の最大化が達成され、プロジェクト全体の成功に寄与します。

== アジャイル開発の観点からiOS/Androidでの類似点・相違点をおさえる例

iOS/Android両方のUIガイドライン、レイアウトエンジン、ナビゲーションパターンなどの違いを事前に把握しておくことで、各プラットフォームに応じた開発タスクの見積もりが正確に行うことができるので、スプリント計画の精度が向上するのでリソースの最適配分が可能になります。また、プラットフォームごとの相違点を理解することで、実装上におけるリスクの早期特定から適切な対策を立てることができ、スプリント中に問題が顕在化する前に対処が可能になるので、結果としてスムーズな開発進行を支援することにもつながっていきます。

本稿て提示するのはほんの一例にはなりますが、

- 各プラットフォームのガイドラインやベストプラクティスにできるだけ従う
- 同じ機能でもプラットフォームによって実装アプローチが異なる場合がある点に注意する
- ユーザー体験を損なわないよう、各プラットフォームの特性を理解したうえで設計・実装する

という観点から判断をするときの参考になれば嬉しく思います。

__【普段から心がけておくとよいポイント】__

1. 定期的な公式ドキュメントの確認・新機能やデザインの変更点の共有
2. 両プラットフォームに共通する部分と独自に調整すべき部分の明確化
3. プロトタイプ段階でアニメーション・インタラクションの確認
4. iOS/AndroidのUI処理における相違点やアプリケーションとの調和の確認
5. 定期的なデザインレビューやユーザビリティテストの実施
6. 各プラットフォームにおける実装の課題や成功事例の共有

==== 1. iOS/Android間における差異を意識したUI表現例

//image[001_difference_ios_android1][iOS/Android間で考え方が異なる事例（1）][scale=0.8]

//image[002_difference_ios_android2][iOS/Android間で考え方が異なる事例（2）][scale=0.8]

==== 2. プラットフォームで提供しているUI構成要素に関する例

//image[003_example_only_android_component][iOSでは用意されていないがAndroidでは用意されている表現例][scale=0.8]

==== 3. 宣言的UIを例にした考え方を合わせられる可能性があり得る例

//image[004_example_decretive_component][複雑な要素をともなう画面を宣言的UIで考え方を合わせる][scale=0.8]

==== 4. 端末固有の機能を考える場合の例

//image[005_media_player_example][動画プレイヤー機能など端末に依存するものは特に注意が必要][scale=0.8]

アジャイル開発の観点からiOS/Android間の差異をおさえることで、開発プロセスが大きく改善されます。プラットフォーム固有の特性を理解することで、迅速な開発と反復が可能になり、潜在的なリスクを早期に特定し管理することにもつながると思います。

また、効率的なリソース配分と品質向上につながり、各プラットフォームのベストプラクティスにもとづいた最適な実装が実現します。
これにより、ユーザー体験の一貫性を保ちつつ、各OSの特性を活かした付加価値を提供でき、顧客満足度の向上につながります。さらに、チーム内でのナレッジ共有が促進され、開発者のスキル向上と柔軟な対応力の獲得が期待できます。

== なぜこの観点がアジャイル開発において重要だと考えるか？

「デザインから逆算して難易度を見積もるための観点」がアジャイル開発において重要となる理由は、アジャイル開発の特性や目指す成果と密接に関係するからだと考えています。

==== 1. 迅速なフィードバックサイクルの促進

アジャイル開発では、短いスプリントで継続的にプロダクトをリリースし、ユーザーからのフィードバックを迅速に反映することが求められます。デザインから逆算して難易度を正確に見積もることで、スプリントごとに達成可能なタスクを正確に割り当てることができ、フィードバックサイクルを円滑に進めることが可能になります。

==== 2. 優先順位の明確化とスコープ管理

アジャイル開発では、機能やタスクの優先順位づけが重要です。デザインから逆算して難易度を見積もることで、技術的に複雑で時間のかかるタスクを早期に把握し、スプリントの計画段階で適切に優先順位をつけることができます。また、スコープ管理がしやすくなり、リソースを最適に配分することで、開発の進行をスムーズに保つことができます。

==== 3. チームの共通理解と連携の強化

アジャイル開発は、チーム全体の連携と協力が非常に重要です。デザインから逆算して難易度を見積もるとき、UIコンポーネントの複雑さやプラットフォーム間の差異、データフローの管理など、各メンバーが直面する課題を共有することで、チーム全体が共通の理解を持つことができます。これにより、役割分担が明確になり、チーム全体で効率的に作業を進めることが可能になります。

==== 4. リスク管理と技術的負債の抑制

アジャイル開発では、技術的負債を最小限におさえることが重要です。デザインから逆算して難易度を見積もることで、潜在的なリスクを早期に特定し、適切な対策を講じることができます。これにより、スプリント後半での問題発生や、リリース直前での修正が必要になる状況を防ぐことができ、スムーズな開発を維持できます。

==== 5. 持続可能なペースの確保

アジャイル開発では、持続可能な開発ペースを維持することが求められます。デザインから逆算して難易度を見積もることで、開発チームが過剰な負荷をかけられることなく、適切なペースで進行できるように計画を立てることができます。これにより、チームメンバーのバーンアウトを防ぎ、長期的に高い生産性を維持することが可能です。

==== 6. ユーザー価値の最大化

アジャイル開発は、ユーザーにとって最も価値のある機能を優先して提供することを目指します。デザインから逆算して難易度を見積もることで、どの機能がユーザーにとって重要か、またその機能を実現するために必要な工数やリソースを正確に把握できます。これにより、限られた時間とリソースの中で最大のユーザー価値を提供するための判断が容易になります。

アジャイル開発において、デザインから逆算して難易度を見積もる観点は、スムーズなスプリント計画、リスクの早期発見、チーム全体の連携、持続可能な開発ペースの維持、そしてユーザー価値の最大化に直結します。これらはアジャイル開発の成功に欠かせない要素であり、結果としてプロジェクト全体の効率と品質を高めることにつながるからです。

== まとめ

繰り返しになりますが、モバイルアプリ開発プロセスにおいて、デザインから逆算して難易度を適切に見積もるためには、次の観点が重要だと考えています。

==== チーム全体の連携 

プロダクトマネージャー・デザイナー・エンジニア・QAなど、各役割が1つのチームとして協力することが不可欠になります。特にUI実装と機能ロジックは切り離して考えることが難しい場合も珍しくないため、役割や職種を越えて共通理解を持っている状態が望ましいと思います。

==== 技術的な実現可能性の評価

デザインが提案された時点で「実現が技術的にどれほど難しいか？」をという問いを常に持ち、評価することも重要になってきます。特に、デザインをできる限り完璧に再現するに当たり、複雑な実装が必要となる箇所を早期に特定することで、実現可能性の模索や難しい場合における代替案を検討がしやすくなると思います。

==== 時間とリソース制約の考慮 

時間やリソースには限りがあるため、実装の難易度が高い部分を早期に見極めることが求められます。これにより、開発プロセスの初期段階でリスクを管理し、優先順位をつけて進めることが可能になると思います。

これらの観点をもとに、開発初期の段階でチームが一丸となってデザインと技術的な要件のバランスを取りながら、最適なアプローチを見出すことがアジャイルを進めていくうえでは重要になります。

加えて、モバイルアプリ開発において、デザインから逆算して難易度を見積もるときは、前段階での準備力が極めて重要になると考えています。機能実現において、見た目だけでなく、裏側の技術的な実現可能性を早期に評価する必要があります。時間やリソースが限られた状況で、技術的に難しい部分やリスクの高い部分を特定し、対応するための準備を進めることが重要です。この「目に見えない部分」への準備力が、素早く正解を見出すための基盤となります。

これらの準備がしっかりとできていれば、アジャイル開発の中で、デザインから逆算し、実現可能なスケジュールやリソースを確度が高く見積もることができ、チームとしての成功にも大きくつながると思います。

== 参考資料

iOS/Android間での差異を意識しながらよりよい実装を考えるためのアプローチ事例については、私自身も業務内外で取り組んでいる最中です。これまで私が執筆した記事や登壇資料を何点か掲載しますので、今後の参考になれば幸いです。

 * 円滑なUI＆機能実装やデザイナーとの共同作業を進めるために心がけてきた事@<fn>{iosdc2021_pamphlet_manuscript}
 * 複雑なUI実装の壁を越えるための考え方事例紹介 （iOS/Android間で実装を合わせるヒント）@<fn>{iosdc2021_pamphlet_manuscript}

//footnote[iosdc2021_pamphlet_manuscript][https://github.com/fumiyasac/iosdc2021_pamphlet_manuscript/blob/main/manuscript.md]
//footnote[androidjian-deshi-zhuang-wohe-waseruhinto][https://speakerdeck.com/fumiyasac0921/androidjian-deshi-zhuang-wohe-waseruhinto]

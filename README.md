# lab02
Homework

Part I

Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
<img width="296" alt="using namespace std;" src="https://user-images.githubusercontent.com/55495317/160635641-189748ec-0bd3-47bb-8966-8ebe9955e77a.png">
<img width="560" alt="denjasan@nan 1ab-02 pbcopy  - sshid_rsa pub" src="https://user-images.githubusercontent.com/55495317/160635777-6cce6ff0-3e81-41e1-b489-77dcdb59c148.png">

Добавьте этот файл в локальную копию репозитория.
Закоммитьте изменения с осмысленным сообщением.
<img width="740" alt="Pasted Graphic 2" src="https://user-images.githubusercontent.com/55495317/160635900-3dc81949-2d8b-409d-9836-3fee7d719972.png">

Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
<img width="440" alt="using namespace std;" src="https://user-images.githubusercontent.com/55495317/160636201-5f5fbdec-c90d-40b3-87f1-6c52037f5fcb.png">

Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?
Запуште изменения в удалёный репозиторий.
<img width="630" alt="git comit" src="https://user-images.githubusercontent.com/55495317/160636236-fadb5396-411a-4c86-9164-7ec169daf6fc.png">

Проверьте, что история коммитов доступна в удалёный репозитории.
Part II

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

В локальной копии репозитория создайте локальную ветку patch1.
<img width="622" alt="Pasted Graphic 5" src="https://user-images.githubusercontent.com/55495317/160636389-8d750b0b-61a6-497a-a335-77d14c854d76.png">

Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;
<img width="629" alt="Pasted Graphic 6" src="https://user-images.githubusercontent.com/55495317/160636874-575fcc0f-f5fa-4e85-b0db-bf9efb6e1313.png">

commit, push локальную ветку в удалённый репозиторий.
<img width="590" alt="Pasted Graphic 7" src="https://user-images.githubusercontent.com/55495317/160636988-49b6b67a-b24e-485f-892a-8cb5e305d959.png">
<img width="626" alt="Pasted Graphic 8" src="https://user-images.githubusercontent.com/55495317/160637145-ff9aaf38-a172-471d-bafd-c5fc4eeac886.png">

<img width="629" alt="Pasted Graphic 6" src="https://user-images.githubusercontent.com/55495317/160636874-575fcc0f-f5fa-4e85-b0db-bf9efb6e1313.png">
Проверьте, что ветка patch1 доступна в удалёный репозитории.
Создайте pull-request patch1 -> master.
<img width="926" alt="Pasted Graphic 9" src="https://user-images.githubusercontent.com/55495317/160637184-f4a7d4b0-948f-4c97-a27f-2fbd0e9956ff.png">

В локальной копии в ветке patch1 добавьте в исходный код комментарии.
commit, push.
Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
<img width="1236" alt="Pasted Graphic 10" src="https://user-images.githubusercontent.com/55495317/160637433-4c65957c-01d9-4d1e-b482-a34030fec39f.png">

В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
Локально выполните pull.
С помощью команды git log просмотрите историю в локальной версии ветки master.
<img width="621" alt="Pasted Graphic 12" src="https://user-images.githubusercontent.com/55495317/160638267-4f78d313-6187-4e5c-8e53-2dda3a5ab27b.png">

Удалите локальную ветку patch1.
<img width="351" alt="denjasan@man lab02  git branch --delete patch1" src="https://user-images.githubusercontent.com/55495317/160638512-d5ee81cd-4ba3-414e-bea7-f84ef1f08012.png">

Part III

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

Создайте новую локальную ветку patch2.
Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.

brew install clang-format

clang-format -i --style=Mozilla hello_world.cpp


commit, push, создайте pull-request patch2 -> master.
В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
<img width="688" alt="denjasan Format of code" src="https://user-images.githubusercontent.com/55495317/160638731-9f1aa031-670a-47fe-bee2-b1f368bb00d3.png">
<img width="629" alt="remote Resolving deltas 100N (11), completed with 1 local object" src="https://user-images.githubusercontent.com/55495317/160638797-5c240848-b8b0-43f8-91cc-d8186e54ab62.png">

Убедитесь, что в pull-request появились конфликтны.

<img width="907" alt="Pasted Graphic 17" src="https://user-images.githubusercontent.com/55495317/160638831-9010f0e0-3fd9-430b-b034-b391504eef6e.png">


Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
<img width="662" alt="github comdenjasan1ab02" src="https://user-images.githubusercontent.com/55495317/160638895-92f3529c-4211-482c-a507-ac9aacab189c.png">
<img width="568" alt=" variable for name" src="https://user-images.githubusercontent.com/55495317/160638988-b9d8f661-9b2b-45b6-80d1-ddb06f81f403.png">
<img width="924" alt="Pasted Graphic 20" src="https://user-images.githubusercontent.com/55495317/160639090-91ee17a6-14e2-43a6-88b3-20dfa0f2c593.png">


Сделайте force push в ветку patch2
Убедитель, что в pull-request пропали конфликтны.
Вмержите pull-request patch2 -> master.

<img width="713" alt="Pasted Graphic 22" src="https://user-images.githubusercontent.com/55495317/160638922-166adb09-241b-4b76-83ad-ce41acae0fa3.png">




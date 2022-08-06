/*
#B、直播获奖
题目描述
NOI2130NOI2130 即将举行。为了增加观赏性,CCFCCF 决定逐一评出每个选手的成绩,并直播即时的获奖分数线。本次竞赛的获奖率为 w\%w%,即当前排名前 w\%w% 的选手的最低成绩就是即时的分数线。

更具体地,若当前已评出了 pp 个选手的成绩,则当前计划获奖人数为 \max(1, \lfloor p \times w \%\rfloor)max(1,⌊p×w%⌋),其中 ww 是获奖百分比,\lfloor x \rfloor⌊x⌋ 表示对 xx 向下取整,\max(x,y)max(x,y) 表示 xx 和 yy 中较大的数

如有选手成绩相同,则所有成绩并列的选手都能获奖,因此实际获奖人数可能比计划中多

作为评测组的技术人员,请你帮 CCFCCF 写一个直播程序

输入格式
第一行有两个整数 n, wn,w。分别代表选手总数与获奖率
第二行有 nn 个整数,依次代表逐一评出的选手成绩

输出格式
只有一行,包含 nn 个非负整数,依次代表选手成绩逐一评出后,即时的获奖分数线。相邻两个整数间用一个空格分隔
* /
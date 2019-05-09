print('학점처리 프로그램')

print('이름을 입력해주세요\n')
name = input("")
kor = int(input("국어점수: "))
eng = int(input("영어점수: "))
math = int(input("수학점수: "))

sum = kor + eng + math
print("%s님의 성적입니다." % name)
print("%s님의 총점은 %d점입니다." % name, sum)

avg = sum / 3
print("%s님의 평균은 %.1f점입니다." % avg)

if avg >= 90:
    print("당신의 학점은 A 입니다.")
elif avg >= 80:
    print("당신의 학점은 B 입니다.")
elif avg >= 80:
    print("당신의 학점은 C 입니다.")
elif avg >= 80:
    print("당신의 학점은 D 입니다.")
else :
    print("다시 입력해주세요.")

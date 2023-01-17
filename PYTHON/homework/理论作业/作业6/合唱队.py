def getNum(high_list):
    status = []
    for index in range(len(high_list)):  # 从第0个元素开始建立
        status.append(1)
        for preIndex in range(index):  # 从前面（第0个）元素中开始更新
            if high_list[preIndex] < high_list[index] and status[preIndex] + 1 > status[index]:
                # 如果当前元素小于元素，且更新后长度更长
                status[index] = status[preIndex] + 1
    return status

#代码只有在第一种情况下（即文件作为脚本直接执行）才会被执行，而 import 到其他脚本中是不会被执行的
if __name__ == '__main__':
    while True:
        try:
            n = int(input())
            max = 0
            high_list = list(map(int, input().split(" ")))
            dp_up = getNum(high_list)
            # 获取每个数在最大反向递增字串中的位置
            dp_down = list(reversed(getNum(list(reversed(high_list)))))  
            for i in range(len(dp_up)):
                dp = dp_up[i] + dp_down[i]
                if dp > max:
                    max = dp
            print(n-max+1)
        except:
            break

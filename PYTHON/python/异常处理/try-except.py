''' try:
    afile=open('bala','r')
except FileNotFoundError as e: 
    #捕获异常，并输出错误的详细信息
    print('Error happened:',e) 
    #Error happened: [Errno 2] No such file or directory: 'bala'  
 '''

''' def safefloat(obj):
    try:
        retval=float(obj)
        return retval
    # except ValueError as valerr:
    #     print(valerr)
    # except TypeError as typeerr:
    #     print(typeerr)

    except (ValueError,TypeError) as err:
        print(err)
safefloat('xyz')  #could not convert string to float: 'xyz'
safefloat([1]) #float() argument must be a string or a real number, not 'list'  '''

''' #捕获所有异常
def safefloat(obj):
    try:
        retval=float(obj)
        return retval
    except:
        print('error happened')
 '''

#try-finally
#finally子句无论异常是否发生，是否捕获都会执行

#try-except-else-finally
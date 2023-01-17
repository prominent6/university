def type_set(file_name, out_file_name, num):
    data_in = open(file_name)
    data_out = open(out_file_name, 'w')
    for line in data_in:
        str1 = line.split(':')[0].strip()
        str1 = ' '.join(str1.split()) + ' '
        while len(str1) < num:
            str1 = ' ' + str1
        str2 = line.split(':')[1].strip()
        str2 = ' ' + ' '.join(str2.split())
        data_out.write(str1 + ':' + str2 + '\n')
    data_in.close()
    data_out.close()
 
 
type_set('listin.txt', 'listout.txt', 40)
 

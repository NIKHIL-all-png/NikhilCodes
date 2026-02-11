# {
#     2:{1:2,2:4,3:6,4:8},
#     3:{1:3,2:6,3:9,4:12}
# }
print({i:{j:j*i for j in range(1,5) } for i in range(2,5)})
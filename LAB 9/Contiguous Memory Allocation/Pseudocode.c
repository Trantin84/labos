
bool mem[2000000000]; //maximum of int
int option=1;

void function1()
      hỏi kích thước tiến trình cần cấp bao nhiêu? size.
      for i = 0 --> MAX-size
         if (mem[i] = false) then "mem[i] đến mem[i+size-1]" có trống hay không/có đều là false hay không. Nếu có thì cấp phát: gán toàn bộ mem[i] đoạn đó là true. Đồng thời ghi nhận lại "Tiến trình X đã được cấp mem từ i đến ..."
               
      Sau khi vòng lặp kết thúc vẫn không cấp được thì trả lời là không cấp được.
               
               
void function2()
      kiểm tra xem tiến trình X được cấp trong đoạn bộ nhớ i đến j nào, 
      for (k=i to j) mem[k]= false;  //coi như vùng nhớ này trống trở lại
     xóa thông tin "Tiến trình X đã được cấp mem từ i đến ..." ra khỏi danh mục (vì X coi như đã kết thúc)

void function3()
void function4()
               
     Cách 1:  for i = 0 --> MAX
         if (mem[i] = false) thì dò tiếp mem i++ cho đến khi gặp mem[j] là true. Print "Memory free from i to j-1" rồi tiếp tục dò.

     Cách 2: In ra danh mục "Tiến trình X đã được cấp mem từ i đến ..."
           
           
main(    )
MAX = atoi(argv[1]);  // truyền kích thước vào khi gọi chạy 

for(0 --> MAX - 1)   mem[i] = false //ban đầu bộ nhớ coi như trống hết.


while(option != 5)
{     print "Chọn option   1-Cap phat   2-Thu hoi   3-Gom cum   4-Thong ke"
      scanf   option
      switch (option) of
      1  tạo tiểu trình A chạy hàm fun 1
      
      
      2  tạo tiểu trình B chạy hàm fun 2
      
      
      
      3  tạo tiểu trình C chạy hàm fun 3
      
      
      
      4  tạo tiểu trình D chạy hàm fun 4

            
            
      5: return. //thoát
      






}

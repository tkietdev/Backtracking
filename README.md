# Đề thi kết thúc học phần

## Học phần: Phân tích và thiết kế thuật toán

**Thời gian làm bài:** 120 phút
**Được sử dụng tài liệu**
**Đề số:** 01
**Năm học:** 2023-2024

---

# Các vấn đề bài toán lập trình quy hoạch động, backtracking

## Câu 1: Kiểm tra chuỗi đối xứng bằng đệ quy

### Mô tả bài toán

Một chuỗi được gọi là đối xứng (palindrome) nếu khi đọc từ trái sang phải hay từ phải sang trái đều cho cùng một kết quả.

Cho một chuỗi ký tự gồm các chữ cái thường trong bảng chữ cái tiếng Anh, độ dài không quá 100 ký tự.

### Yêu cầu

Viết chương trình bằng ngôn ngữ lập trình C/C++ để kiểm tra xem chuỗi ký tự có phải là chuỗi đối xứng hay không bằng phương pháp đệ quy.

---

## Câu 2: Liệt kê số nhị phân bằng quay lui

### Mô tả bài toán

Viết chương trình bằng ngôn ngữ lập trình C/C++ để liệt kê tất cả các số nhị phân có `n` chữ số với điều kiện trong số đó có đúng một cặp chữ số 1 đứng trước chữ số 0.

### Ràng buộc

```text
2 ≤ n ≤ 20
```

### Ví dụ

Với `n = 4`, kết quả:

```text
0010
0100
0110
1011
1101
1110
```

### Yêu cầu

Sử dụng phương pháp quay lui (backtracking) để sinh các dãy nhị phân thỏa mãn yêu cầu.

---

## Câu 3: Tìm đường bay có tổng chi phí nhỏ nhất

### Mô tả bài toán

Cho một mạng lưới sân bay được biểu diễn bởi ma trận số nguyên gồm `m` dòng và `n` cột.

Mỗi ô của ma trận tương ứng với một sân bay.

Giá trị tại ô `(i, j)` ký hiệu là `a[i][j]` là một số nguyên dương, tượng trưng cho chi phí máy bay đỗ tại sân bay đó.

Máy bay chỉ được phép bay từ một sân bay đến những sân bay chéo lân cận bên trái.

Nếu máy bay đang ở sân bay `(i, j)` thì chỉ có thể bay tới một trong các sân bay:

```text
(i - 1, j - 1)
(i,     j - 1)
(i + 1, j - 1)
```

với điều kiện các sân bay này tồn tại trong ma trận.

### Ràng buộc

```text
m, n ∈ N*
m, n ≤ 100
a[i][j] ≤ 200
```

### Yêu cầu

Viết chương trình bằng ngôn ngữ lập trình C/C++ để tìm một đường bay xuất phát từ một sân bay bất kỳ ở cột cuối cùng và kết thúc ở một sân bay bất kỳ ở cột đầu tiên sao cho tổng chi phí là nhỏ nhất.

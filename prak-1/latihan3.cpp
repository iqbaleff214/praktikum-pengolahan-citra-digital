//  Buatlah program untuk mengambar sumbu x dan sumbu y pada fungsi OnDraw (CDC* pDC) dengan menggunakan pDC->MoveTo(10,10) dan pDC->LineTo(10,100) 

void CCupuDlg::OnButton1() {
    CDC* pDC = GetDC();
    pDC->MoveTo(20,20); // menentukan posisi awal (sumbu y )
    pDC->LineTo(20,120); // membuat garis dari titik awal ke titik tujuan ( sumbu y )
    pDC->TextOut(5,5,"y"); // mencetak tulisan “y”
    pDC->MoveTo(20,120); // menentukan posisi awal ( sumbu x )
    pDC->LineTo(120,120); // membuat garis dari titik awal ke titik tujuan ( sumbu x )
    pDC->TextOut(125,125,"x"); // mencetak tulidan “x”
}
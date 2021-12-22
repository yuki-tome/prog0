/*
平面上の二つのベクトルの角度の余弦(コサイン)を計算する
x1,y1 : ベクトル1
x2,y2 : ベクトル2
*/
double vcos(double x1, double y1, double x2, double y2)
{
  double dot, c;
  dot = x1*x2 + y1*y2;
  return dot/(vlen(x1,y1)*vlen(x2,y2));
}

/* ベクトルの大きさを計算する */
double vlen(double x, double y)
{
  return sqrt(x*x + y*y);
}

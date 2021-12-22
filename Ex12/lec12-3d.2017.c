/*
  ボディマス指数(BMI)を計算する
  t : 身長 (cm)
  w : 体重 (kg)
*/
double bmi(double t, double w)
{
  double t_meter;
  t_meter = t/100.0; /* m単位に変換 */
  return w/nijou(t_meter);
}


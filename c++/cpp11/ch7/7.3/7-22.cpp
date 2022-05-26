// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:13:49

class AirportPrice {
 private:
  float _dutyfreerate;

 public:
  AirportPrice(float rate) : _dutyfreerate(rate) {}
  float operator()(float price) { return price * (1 - _dutyfreerate / 100); }
};

int main() {
  float tax_rate = 5.5f;
  AirportPrice Changi(tax_rate);

  auto Changi2 = [tax_rate](float price) -> float { return price * (1 - tax_rate / 100); };

  float purchased = Changi(3699);
  float purchased2 = Changi2(2899);
}
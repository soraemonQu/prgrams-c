# プログラミング論I - 第三回課題

## 問題1

$3$ 桁の仮数をもつ標準形に直せ

(a) $125\,000$

::: ans
$125\,000 = 1.25\,000 \times 10^6 \approx \boldsymbol{1.25 \times 10^5}$
:::

(b) $0.000\,035\,06$

::: ans
$0.00003506 = 3.50\,6 \times 10^{-5} \approx \boldsymbol{3.51 \times 10^{-5}}$
:::

(c) $0.009\,997$

::: ans
$0.009\,997 = 9.99\,7 \times 10^{-3} \approx 10.00 \times 10^{-3} \approx \boldsymbol{1.00 \times 10^{-2}}$
:::

(d) $25.009$

::: ans
$25.009 = 2.50\,09 \times 10^{-1} \approx \boldsymbol{2.50 \times 10^1}$
:::

(e) $-0.000\,999\,9$

::: ans
$-0.000\,999\,9 = -9.99\,9 \times 10^{-4} \approx -10.00 \times 10^{-4} \approx \boldsymbol{-1.00 \times 10^{-3}}$
:::

(f) $-82.44$

::: ans
$-82.44 = -8.24\,4 \times 10^{-1} \approx \boldsymbol{-8.24 \times 10^1}$
:::

## 問題2

$4$ 桁の仮数をもつ標準形に直せ

(a) $3.141\,59$

::: ans
$3.141\,59 = 3.141\,59 \times 10^0 \approx \boldsymbol{3.142 \times 10^0}$
:::

(b) $2.718\,28$

::: ans
$2.718\,28 = 2.718\,28 \times 10^0 \approx \boldsymbol{2.718 \times 10^0}$
:::

(c) $10\,034.23$

::: ans
$10\,034.23 = 1.003\,423 \times 10^4 \approx \boldsymbol{1.003 \times 10^4}$
:::

::: page
:::

## 問題3

$3$ 桁の仮数を用いて与えられた数を標準形に直し, 指示された計算をせよ

(a) $51 \times 34$

::: ans
$51 \times 34 \approx 5.10 \times 10^1 \times 3.40 \times 10^1 = 17.3\,4 \times 10^2 \approx \boldsymbol{1.73 \times 10^3}$
:::

(b) $3.14 \times 3.14$

::: ans
$3.14 \times 3.14 \approx 3.14 \times 10^0 \times 3.14 \times 10^0 = 9.85\,96 \times 10^0 \approx \boldsymbol{9.86 \times 10^0}$
:::

(c) $0.005\,2 \times 1.07$

::: ans
$0.005\,2 \times 1.07 \approx 5.20 \times 10^{-3} \times 1.07 \times 10^0 = 5.56\,4 \times 10^{-3} \approx \boldsymbol{5.56 \times 10^{-3}}$
:::

(d) $100 \times 100 \times 100 \times 100$

::: ans
$100 \times 100 \times 100 \times 100 \approx 1.00 \times 10^2 \times 1.00 \times 10^2 \times 1.00 \times 10^2 \times 1.00 \times 10^2$
$= 1.00 \times 10^8 \approx \boldsymbol{1.00 \times 10^8}$
:::

## 問題4

$A$, $B$ が浮動小数点数のとき,
$$
  A \times B = B \times A
$$
になることを証明せよ

::: proof
$A$ と $B$ は $t$ 桁仮数の標準形 $A = a \times 10^\alpha$, $B = b \times 10^\beta$ であるとする

また, $X$ を $t$ 桁仮数の標準形に直す操作を $f_t(X)$ で表すこととする

それぞれの仮数部と指数部について,

- 実数積の交換法則により $a \times b = b \times a$ である
- 整数和の交換法則により $\alpha + \beta = \beta \times \alpha$ である

これより $(a \times b) \times 10^{\alpha + \beta} = (b + a) \times 10^{\beta + \alpha} = \varphi$ とできる

当初の $A \times B$ および $B \times A$ について, 定義より以下がいえる

- $A \times B = f_t\bigg((a \times b) \times 10^{\alpha + \beta}\bigg) = f_t(\varphi)$
- $B \times A = f_t\bigg((b \times a) \times 10^{\beta + \alpha}\bigg) = f_t(\varphi)$

ゆえに
$$
  A \times B = B \times A
$$
が示された
:::

::: page
:::

## 問題5

浮動小数点計算でも $A + B = B + A$ となることを証明せよ

::: proof
$A$ と $B$ は $t$ 桁仮数の標準形 $A = a \times 10^\alpha$, $B = b \times 10^\beta$ であるとする

また, $X$ を $t$ 桁仮数の標準形に直す操作を $f_t(X)$ で表すこととする

$A \geq B$ と仮定しても一般性を失わないため, これを仮定すると, $\alpha \geq \beta$

実数和の交換法則により $a + b \times 10^{\beta - \alpha} = b \times 10^{\beta - \alpha} + a$ である

これより $(a + b \times 10^{\beta - \alpha}) \times 10^\alpha = (b \times 10^{\beta - \alpha} + a) \times 10^\alpha = \varphi$ とできる

当初の $A + B$ および $B + A$ について, 定義より以下がいえる

- $A + B = f_t(a \times 10^\alpha + b \times 10^\beta) = f_t\bigg((a + b \times 10^{\beta - \alpha}) \times 10^\alpha\bigg) = f_t(\varphi)$
- $B + A = f_t(b \times 10^\beta + a \times 10^\alpha) = f_t\bigg((b \times 10^{\beta - \alpha} + a) \times 10^\alpha \bigg) = f_t(\varphi)$

ゆえに
$$
  A + B = B + A
$$
が示された
:::

## 問題6

$3$ 桁の仮数において, 次の計算を行え

(a) $0.182 - 12.3$

::: ans
$0.182 - 12.3 \approx 1.82 \times 10^{-1} - 1.23 \times 10^1 = (0.0182 - 1.23) \times 10^1$
$= -1.21\,18 \times 10^1 \approx \boldsymbol{-1.21 \times 10^1}$
:::

(b) $185 - 0.1$

::: ans
$185 - 0.1 \approx 1.85 \times 10^2 - 1.00 \times 10^{-1} = (1.85 - 0.00100) = 1.84\,900 \approx \boldsymbol{1.85 \times 10^2}$
:::

(c) $185 + 0.01$

::: ans
$185 + 0.01 \approx 1.85 \times 10^2 + 1.00 \times 10^{-2} = (1.85+0.000100) \times 10^2$
$= 1.85\,0100 \times 10^2 \approx \boldsymbol{1.85 \times 10^2}$
:::

(d) $1.89 \times 10^1 - 18.9$

::: ans
$1.89 \times 10^1 - 18.9 \approx 1.89 \times 10^1 - 1.89 \times 10^1 = 0.00 \times 10^1 \approx \boldsymbol{0.00 \times 10^0}$
:::

::: page
:::

## 問題7

$A = a_1 \times 10^{b_1}$, $B = a_2 \times 10^{b_2}$ において, $b_1 - b_2 > t$ という場合には, $t$ 桁の仮数を用いれば,
$$
  A + B = A, \quad A - B = A
$$
となることを証明せよ

::: proof
$b_1 - b_2 > t$ より, 非負整数 $n$ を用いて $b_1 - b_2 = t + 1 + n$ と表せる

これより $A = a_1 \times 10^{b_1}$, $B = \left(\dfrac{a_2}{10^{t + 1}} \times 10^{-n}\right) \times 10^{b_1}$ と表せる

$10^{-n} \leq 1$ より $B' = \dfrac{a_2}{10^{t + 1}} \times 10^{b_1}$ とすれば $|B'| = |B'| \times 10^{-n} \leq |B|$ と表せる

よって $a_0 = {a_{01}.a_{01} \cdots a_{0t}}\_{(10)}$, $a_1 = {a_{11}.a_{11} \cdots a_{1t}}\_{(10)}$とすれば
$$
\begin{array}{cc} & A & a_{01} & . & a_{02} & \cdots & a_{0t} \cr \pm ) & B' & 0 & . & 0 & \cdots & 0 & 0 & a_{11} & \cdots & a_{1t} \cr \hline & A \pm B' & a_{01} & . & a_{02} & \cdots & a_{0t} & 0 & \cancel{\pm a_{11}} & \cdots & \cancel{\pm a_{1t}} \end{array}
$$

ここで $A \pm B'$ の小数点第 $t$ 位以下は四捨五入されて、 $A \pm B' = A$ となる

ゆえに $|B'| \leq |B|$ より
$$
A \pm B = A
$$
となる
:::

## 問題8

$0$ を仮数 $0$, 指数は負の最大べき乗で表すことにすれば, $B$ が $0$ の場合, 前問の結果は $b_1$ に関わらず成り立つことを証明せよ

::: proof
$A = a \times 10^\alpha$ とおく

指数部の最大値を $N$ とすれば $B = 0 \times 10^{-N}$ と表せるので

$$
A \pm B = a \times 10^\alpha \pm 0 \times 10^{-N} = (a \pm 0 \times 10^{-N-\alpha}) \times 10^\alpha = a \times 10^\alpha = A
$$
:::

::: page
:::

## 問題9

$t = 3$ の場合で, $$A + (B + C) \neq (A + B) + C$$ となる例を挙げよ
ただし, $A$, $B$, $C$ は標準形で与えられているとする

::: ans
題意を満たす例は $\boldsymbol{A = 4.00 \times 10^0, B = 6.00 \times 10^0, C = 5.00 \times 10^3}$ である

$$
A + (B + C) = 4.00 \times 10^0 + (6.00 \times 10^0 + 5.00 \times 10^3) = 4.00 \times 10^0 + 5.00 \times 10^3 = 5.00 \times 10^3
$$
$$
(A + B) + C = (4.00 \times 10^0 + 6.00 \times 10^0) + 5.00 \times 10^3 = 1.00 \times 10^1 + 5.00 \times 10^3  = 5.01 \times 10^3
$$
:::

## 問題10

$t = 3$ として, 次の計算結果をもとめよ

(a) $10. / 9.$

::: ans
$10. / 9. \approx \dfrac{1.00 \times 10^1}{9.00 \times 10^0} = \dfrac{10.0 \times 10^0}{9.00 \times 10^0} = 1.111\ldots \times 10^{0 - 0} \approx \boldsymbol{1.11 \times 10^0}$
:::

(b) $3. / 9.$

::: ans
$3./9. = \dfrac{3.00 \times 10^0}{9.00 \times 10^0} = \dfrac{30.0 \times 10^{-1}}{9.00 \times 10^0} = 3.333\ldots \times 10^{-1-0} \approx \boldsymbol{3.33 \times 10^{-1}}$
:::

(c) $5. / 9.$

::: ans
$5./9. = \dfrac{5.00 \times 10^0}{9.00 \times 10^0} = \dfrac{50.0 \times 10^{-1}}{9.00 \times 10^0} = 5.555\ldots \times 10^{-1-0} \approx \boldsymbol{5.56 \times 10^{-1}}$
:::

## 問題11

$t = 4$ として, $9. / 5.$ と $5. / 9.$ のそれぞれを求め, その積を計算して $1.$ になるかを評価せよ

::: ans
$9. / 5.$ と $5. / 9.$ について

- $9./5. = \dfrac{9.000 \times 10^0}{5.000 \times 10^0} = 1.8000 \times 10^{0-0} \approx 1.800 \times 10^0$
- $5./9. = \dfrac{5.000 \times 10^0}{9.000 \times 10^0} = \dfrac{50.00 \times 10^{-1}}{9.000 \times 10^0} = 5.5555\ldots \times 10^{-1-0} \approx 5.556 \times 10^{-1}$

これらの積をとると
$$
(9./5.) \times (5./9.) = (1.800 \times 10^0) \times (5.556 \times 10^{-1}) = 10.0008 \times 10^{0-1} \approx \boldsymbol{1.000 \times 10^0}
$$
となり, $1.$ と一致する
:::

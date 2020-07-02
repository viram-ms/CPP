import requests
from bs4 import BeautifulSoup
from threading import Timer


def stock_price(symbol: str = "AAPL") -> str:
    # url = f"https://in.finance.yahoo.com/quote/INDUSINDBK.NS?p=INDUSINDBK.NS&.tsrc=fin-srch"
    url = f"https://in.finance.yahoo.com/quote/{symbol}?s={symbol}"
    soup = BeautifulSoup(requests.get(url).text, "html.parser")
    class_ = "market-summary"
    # class_2 = "Whs(nw) D(ib) Bgc($lv2BgColor) W(100%) Bxz(bb)"
    print(soup.find('div', id="market-summary"))
    # return soup.find("div", class_=class_).find("span").text


if __name__ == "__main__":
    stock_price()
    # while(True):
    # for symbol in "AAPL".split():
        # print(f"Current {symbol:<4} stock price is {stock_price(symbol):>8}")
    
    
    
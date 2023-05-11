#include <iostream>
#include <string>

class Samochod
{
public:
   int wiek() const
   {
      return aktualny_rok - rokProdukcji;
   }
   void setMarka(const std::string &nowaMarka)
   {
      marka = nowaMarka;
   }
   void setModel(const std::string &nowyModel)
   {
      model = nowyModel;
   }
   void setRokProdukcji(int nowyRokProdukcji)
   {
      rokProdukcji = nowyRokProdukcji;
   }
   const std::string &getMarka() const
   {
      return marka;
   }
   const std::string &getModel() const
   {
      return model;
   }
   int getRokProdukcji() const
   {
      return rokProdukcji;
   }

private:
   int aktualny_rok = 2023;
   std::string marka;
   std::string model;
   int rokProdukcji;
};

int main()
{
   Samochod s;
   s.setMarka("wieśwagen ");
   s.setModel("golf ");
   s.setRokProdukcji(2010);
   std::cout << s.getMarka() << s.getModel() << s.wiek() << "lat" << std::endl;

   return 0;
}

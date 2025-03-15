

public class LabProblemBook {
    private  int ISBN;
    private  String BookTitle;
    private  int NumberOfPage;
 private static int count=0;
        
        public  LabProblemBook(int ISBN,String BookTitle,int NumberOfPage, int count){
                
                this.ISBN = ISBN;
               this.BookTitle= BookTitle;
               this.NumberOfPage = NumberOfPage;
               count ++;
    }
    public LabProblemBook()
    {
        this.ISBN = 0;
        this.BookTitle = "Dont know";
        this.NumberOfPage=0;
        count++;

    }
    @Override
    public String toString(){
        return "LabProblemBook[ISBN="+ISBN+",Title="+BookTitle+",pages="+NumberOfPage+"]";

    }
    public int compareTo(LabProblemBook other){
        if(this.NumberOfPage>other.NumberOfPage){
            return 1;
        }
        else{
            return -1;
        }

    }
    public static int getCount(){
        return count;
    }
    public int getNumberOfPage(){
        return NumberOfPage;
    }
   
}

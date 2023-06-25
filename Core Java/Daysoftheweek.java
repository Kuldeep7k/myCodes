package daysoftheweek;


public class Daysoftheweek {


    public static void main(String[] args) {

        int today = 5;
        String day  ="";
        switch (today) {
              
            case 1 : day = "Monday";
                break;
                
                case 2 :day ="Tuesday";
                break;
                
                    case 3 :day = "Wednesday";
                break;
                
                    case 4 :day = "Thursday";
                break;
                
                    case 5 :day = "Friday";
                break;
                
                    case 6 :day ="Saturday";
                break;
                
                    case 7 :day ="Sunday";
                break;
                default :day ="Incorrect Day!";
                break;
                }
        System.out.println(day);
    }
}

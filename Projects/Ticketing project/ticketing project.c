#include<stdio.h>
#define p printf
#define s scanf
main()
{
	
	int lang,area,venue,time,snac,ind,mov,sea,sp,s_p,sn_p,gen; 
	float se_co=s_p*sea;
	float gb=se_co+sn_p;
	float gst=gb*0.18; //18/100=0.18
	float tb=gst+gb;
	
	p("\nCHOOSE THE LANGUAGE YOU WANT TO PROCEED WITH- \n");
	p("\nAAGE BHADNE HETU BHASHA CHUNE-\n");
	p("\n1.Press 1 for English");
	p("\n2.Press 2 for Hindi\n");
	p("\nEnter your Choice : ");
	s("%d",&lang);
	
	
	if(lang==1)
	{
	    p("CHOOSE YOUR AREA\n");
		p("================\n");
		p("\n1.Press 1 for kamrej.");
		p("\n2.Press 2 for Surat.\n");
		p("\nEnter your Choice : ");
		s("%d",&area);
		
		if(area >= 1 && area <= 2)
		{
			p("\nCHOOSE YOUR VENUE\n");
			p("\n=================\n");
			p("\n1.Press 1 for PVR Cinemas.");
			p("\n2.Press 2 for inox Cinemas.");
			p("\n3.Press 3 for Central mall.\n");
			p("\nEnter your Choice : ");
			s("%d",&venue);
			
			if(venue >= 1 && venue <= 3)
			{
				p("\nCHOOSE YOUR TIME");
				p("\n================\n");
				p("\n1.Press 0 for 12.00 pm");
				p("\n2.Press 1 for 2.00 pm");
				p("\n3.Press 2 for 4.00 pm");
				p("\n4.press 3 for 6.30 pm");
				p("\n5.Press 4 for 8.30 pm");				
                p("\n6.Press 5 for 10.00 pm\n");
				p("\nEnter your Choice : ");
			    s("%d",&time);
			    
			    if(time >= 0 && time <= 5)
			    {
			    	p("\nCHOOSE YOUR INDUSTRY\n");
				    p("\n====================\n");
		            p("\n1.Press 1 for Hollywood.");
		            p("\n2.Press 2 for Bollywood.");
		            p("\n3.Press 3 for Tollywood.\n");
	            	p("\n Enter your Choice : ");
		            s("%d",&ind);

      	            
      	            if(ind==1)
      	            {
      	            	 p("\nCHOOSE YOUR GENRE\n");
	    	             p("\n=================\n");
	    	             p("\n1.Press 1 for Mythology.");
	    	             p("\n2.Press 2 for Action.");
	    	             p("\n3.Press 3 for Sci-Fi.\n");
	    	             p("\nEnter your Choice : ");
	                   	 s("%d" ,&gen);
	                   	 
	                   	if(gen==1)
	                   	{
	                   	  	p("\nCHOOSE YOUR MYTHOLOGY MOVIE\n");
	        	            p("\n===========================\n");
	                    	p("\n1.Press 1 for The Last Oracale.");
	        	            p("\n2.Press 2 for Gods of Egypt.");
	                    	p("\n3.Press 3 for The Clash of the titans.\n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID : %.2f",tb);
									 
									 }//no of seats 
									 else
            	                     {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 1 closed
						
						
						
						//gen 2 hollywood start-english
						else if(gen==2)
						{
							p("\nCHOOSE YOUR ACTION MOVIE \n");
	        	            p("\n========================\n");
	                    	p("\npress 1 for Mad Max.");
	        	            p("\npress 2 for Tenet.");
	                    	p("\npress 3 for John wick.\n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								       ;
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                        
									}
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 2 hollywood closed-english
						
						
						//gen 3 start hollywood english
						else if(gen==3)
						{
						    p("\nCHOOSE YOUR SCI-FI MOVIE\n");
	        	            p("\n===========================\n");
	                    	p("\n1.press 1 for Interstellar.");
	        	            p("\n2.press 2 for Inception.");
	                    	p("\n3.press 3 for Avatar. \n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                        
									}
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 3  hollywood closed-english
						else
            	        {
	            	      p("Invalid Genre Selected-Try Again.");
            	        } 
	               	}//industry 1 Hollywood  closed
	               	
	               	
	               	//industry 2 bollywood english start
	               	else if(ind==2)
      	            {
      	            	 p("\nCHOOSE YOUR GENRE\n");
	    	             p("\n=================\n");
	    	             p("\n1.Press 1 for Mythology.");
	    	             p("\nP2.ress 2 for Action.");
	    	             p("\n3.Press 3 for Sci-Fi.\n");
	    	             p("\nEnter your Choice : ");
	                   	 s("%d" ,&gen);
	                   	 
	                   	  if(gen==1)
	                   	  {
	                   	  	p("\nCHOOSE YOUR MYTHOLOGY MOVIE \n");
	        	            p("\n===========================\n");
	                    	p("\n1.Press 1 for Bramhastra.");
	        	            p("\n2.Ppress 2 for Ram Setu.");
	                    	p("\n3.Press 3 for Adipurush. \n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID : %.2f",tb);
									 
									 }//no of seats 
									 else
            	                     {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 1 bollywood english closed
						
						
						//gen 2 bollywood start-english
						else if(gen==2)
						{
							p("\nCHOOSE YOUR ACTION MOVIE \n");
	        	            p("\n========================\n");
	                    	p("\n1.press 1 for Jawaan.");
	        	            p("\n2.press 2 for Pathan.");
	                    	p("\n3.press 3 for War.\n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								    
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                        
									}
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 2 bollywood closed-english
						
						
						//gen 3 start bollywood english
						else if(gen==3)
						{
						    p("\nCHOOSE YOUR SCI-FI MOVIE \n");
	        	            p("\n===========================\n");
	                     	p("\n1.Press 1 for Koi Mil Gayaa.");
	        	            p("\n2.Press 2 for Krrishh.");
	                        p("\n3.Press 3 for Action Replay. \n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                        
									}
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 3  bollywod closed-english
						
						else
            	        {
	            	      p("Invalid Genre Selected-Try Again.");
            	        } 
	               	}//industry 2-bollywood english closed
	               	
	               	
	               	//industry 3 start-tollywood english
	               	if(ind==3)
      	            {
      	            	 p("\nCHOOSE YOUR GENRE\n");
	    	             p("\n=================\n");
	    	             p("\n1.Press 1 for Mythology.");
	    	             p("\n2.Press 2 for Action.");
	    	             p("\n3.Press 3 for Sci-Fi.\n");
	    	             p("\nEnter your Choice : ");
	                   	 s("%d" ,&gen);
	                   	 
	                   	if(gen==1)
	                   	{
	                   	  	p("\nCHOOSE YOUR MYTHOLOGY MOVIE\n");
	        	            p("\n===========================\n");
	                    	p("\n1.Press 1 for Kannappa.");
	        	            p("\n2.Press 2 for Maha Avatar Narsimha.");
	                    	p("\n3.Press 3 for Mayabazaar.\n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID : %.2f",tb);
									 
									 }//no of seats 
									 else
            	                     {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 1 tollywood english closed
						
						
						//gen 2 tollywood start-english
						else if(gen==2)
						{
							  p("\nCHOOSE YOUR ACTION MOVIE\n");
	        	              p("\n========================\n");
	                    	  p("\n1.Press 1 for RRR.");
	        	              p("\n2.Press 2 for Pushpa.");
	                    	  p("\n3.Press 3 for KGF.\n");
	        	              p("\nEnter your Choice : ");
	                       	  s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								    
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                        
									}
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 2 tollywood closed-english
						
						
						//gen 3 start tollywood english
						else if(gen==3)
						{
						    p("\nCHOOSE YOUR SCI-FI MOVIE\n");
	        	            p("\n========================\n");
	                    	p("\n1.Press 1 for Project K-Kalki.");
	        	            p("\n2.press 2 for 24.");
	                    	p("\n3.press 3 for Aditya 369. \n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	             if(mov >= 1 && mov <= 3)
	        	            {
	        	            	p("\nCHOOSE THE PRICE OF SEATS YOU WANT TO BOOK");
	        	                p("\n==========================================\n");
	        	                p("\n1.Press 1 for 250 rs seat.\n");
	        	                p("\n2.Press 2 for 350 rs seat.\n");
	        	                p("\nEnter your Choice : ");
	        	                s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nCHOOSE THE NUMBER OF SEATS");
					                p("\n==========================\n");
	        		                p("\n1.Press 1 for 1 seat.");
	        		                p("\n2.Press 2 for 2 seats.");
	        		                p("\n3.Press 3 for 3 seats.");
	        		                p("\n4.Press 4 for 4 seats.");
	        		                p("\n5.Press 5 for 5 seats. \n");
	        		                p("\nEnter your Choice : ");
	        		                s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nADD YOUR SNACKS\n ");
	        		                 	p("==================\n");
	        		                 	p("\n1.Press 1 for French Fries - 199 rs.");
	        		                 	p("\n2.Press 2 for Sandwich-249 rs.");
	        		                 	p("\n3.Press 3 for Nachos and Tacos - 399 rs.");
	        		                    p("\n4.Press 4 for Coke - 49 rs.");
	        		                    p("\n5.Press 5 for combo- French fries and coke - 250 rs.");
	        		                    p("\n6.Press 6 for combo- Nachos and Tacos, Coke and Sandwich-700 rs.");
	        		                    p("\n7.Press 7 if want nothing.\n");
	        		                    p("\nEnter your Choice : ");
	        		                    s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nINVALID SNACKS OPTION SELECTED - TRY AGAIN.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=0;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Your choosen seat price : %d",s_p);
								        p("\n Number of seats choosen : %d",sea);
								        p("\n Your Snacks : %d",sn_p);
								        p("\n Your total seat price : %.2f",se_co);
								        p("\n TOTAL AMMOUNT TO BE PAID WITH GST (18%): %.2f",tb);
                                    }
									 else
            	                    {
	            	                    p("Invalid Number of Seats Option Selected-Try Again.");
            	                    } 
								}
								else
            	                {
	            	               p("Invalid Seat Price Option Selected-Try Again.");
            	                } 
							}
							else
            	            {
	            	           p("Invalid Movie Option Selected-Try Again.");
            	            } 
						}//gen 3  tollywood closed-english
						else
            	        {
	            	      p("Invalid Genre Selected-Try Again.");
            	        } 
	               	}//industry 3 tollywood closed
	               	
	               	
				}//time
				else
            	{
	            	p("Invalid Time slot Selected-Try Again.");
            	} 
			}//venue
			else
        	{
	        	p("Invalid Venue Option Selected-Try Again.");
        	}
		}//area
		else
	    {
		   p("Invalid Area Selected-Try Again.");
	    }
	}//language brace closed
	
	
	//Hindi Language start
	if(lang==2)
	{
		p("\nAPNA KSHETRA CHUNE\n");
		p("\n==================\n");
		p("\nKamrej ke liye 1 Dabayein.");
		p("\nSurat ke liye 2 Dabayein\n.");
		p("\nApna Chunav Darz Karayein : ");
		s("%d",&area);
		
		if(area >= 1 && area <= 2)
		{
			p("\nAPNA CINEMAL HALL CHUNEIN\n");
			p("\n=========================\n");
			p("\nPVR Cinemas ke liye 1 dabayein.");
			p("\nInox Cinemas ke liye 2 dabayein.");
			p("\nCentral Cinemas ke liye 3 dabayein.\n");
			p("\nApna Chunav Darz Karayein : ");
			s("%d",&venue);
			
			if(venue >= 1 && venue <= 3)
			{
				p("\nAPNA SAMAY CHUNEIN");
				p("\n=================\n");
				p("\n12.00 pm ke liye 0 daybayein");
				p("\n2.00 pm ke liye 1 daybayein");
				p("\n4.00 pm ke liye 2 daybayein");
				p("\n6.30 pm ke liye 3 daybayein");
				p("\n8.30 pm ke liye 4 daybayein");
				p("\n10.00 pm ke liye 5 daybayein\n");
				p("\nApna Chunav Darz Karayein : ");
			    s("%d",&time);
			    
			    if(time >= 0 && time <= 5)
			    {
			    	p("\nAPNI FILM INDUSTRY CHUNE \n");
                    p("\n========================\n");
                    p("\nHollywood ke liye 1 dabayein.");
                    p("\nBollywood ke liye 2 dabayein.");
                    p("\nTollywood ke liye 3 dabayein.\n");
                    p("\nApna Chunav darz karayein : ");
                    s("%d",&ind);
      	            
      	            if(ind==1)
      	            {
      	            	 p("\nAPNI SHAILEE CHUNE (GENRE)\n");
                         p("\n==========================\n");
                         p("\nMythology ke liye 1 dabayein (Pauranik).");
                         p("\nAction ke liye 2 dabayein (Action).");
                         p("\nSci-Fi ke liye 3 dabayein (Vighyan-katha).\n");
                         p("\nApna Chunav darz karayein : ");
                         s("%d",&gen);
	                   	 
	                   	  if(gen==1)
	                   	  {
	                   	  	p("\nAPNI MYTHOLOGY (PAURANIK) MOVIE CHUNE \n");
                            p("\n=====================================\n");
                            p("\nThe Last Oracle ke liye 1 dabayein.");
                            p("\nGods of Egypt ke liye 2 dabayein.");
                            p("\nThe Clash of the Titans ke liye 3 dabaye.\n");
                            p("\nApna Chunav darz karayein : ");
                            s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1 seat ke liye 1 dabayein.");
                                     p("\n2 seats ke liye 2 dabayein.");
                                     p("\n3 seats ke liye 3 dabayein.");
                                     p("\n4 seats ke liye 4 dabayein.");
                                     p("\n5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	  p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\nFrench Fries ke liye 1 dabayein - 199 rs.");
                                          p("\nSandwich ke liye 2 dabayein - 249 rs.");
                                          p("\nNachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\nCoke ke liye 4 dabayein - 49 rs.");
                                          p("\nCombo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\nCombo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\nAgar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									 }//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare..");
            	            } 
						}//gen 1 closed hindi
						//gen 2 hollywood start-hindi
						else if(gen==2)
						{
							 p("\nAPNI ACTION MOVIE CHUNE\n");
	        	            p("\n========================\n");
	                    	p("\nMad Max ke liye 1 dabayein.");
	        	            p("\nTenet ke liye 2 dabayein.");
	                    	p("\nJohn wick ke liye 3 dabayein.\n");
	        	            p("\nApna Chunav Darz karayein : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1 seat ke liye 1 dabayein.");
                                     p("\n2 seats ke liye 2 dabayein.");
                                     p("\n3 seats ke liye 3 dabayein.");
                                     p("\n4 seats ke liye 4 dabayein.");
                                     p("\n5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	  p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\nFrench Fries ke liye 1 dabayein - 199 rs.");
                                          p("\nSandwich ke liye 2 dabayein - 249 rs.");
                                          p("\nNachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\nCoke ke liye 4 dabayein - 49 rs.");
                                          p("\nCombo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\nCombo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\nAgar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - Check for confirmation :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
                                        
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare..");
            	            }  
						}//gen 2 hollywood closed-hindi
						//gen 3 start hollywood hindi
						else if(gen==3)
						{
						    p("\nAPNI SCI-FI(Vigyaan-Katha) MOVIE CHUNE \n");
	        	            p("\n======================================\n");
	                    	p("\nInterstellar ke liye 1 dabayein.");
	        	            p("\nInception ke liye 2 dabayein.");
	                    	p("\nAvatar ke liye 3 dabayein. \n");
	        	            p("\nApna Chunav Darz Karayein : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1 seat ke liye 1 dabayein.");
                                     p("\n2 seats ke liye 2 dabayein.");
                                     p("\n3 seats ke liye 3 dabayein.");
                                     p("\n4 seats ke liye 4 dabayein.");
                                     p("\n5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	  p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\nFrench Fries ke liye 1 dabayein - 199 rs.");
                                          p("\nSandwich ke liye 2 dabayein - 249 rs.");
                                          p("\nNachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\nCoke ke liye 4 dabayein - 49 rs.");
                                          p("\nCombo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\nCombo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\nAgar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								       
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
                                        
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 3  hollywood closed-HINDI
						else
            	        {
	            	      p("Amaanya Shaili Chuni Gayi-Dobara Prayas Kare..");
            	        } 
	               	}//industry 1 closed
	               	//industry 2 bollywood english start
	               	else if(ind==2)
      	            {
      	            	 p("\nAPNI SHAILEE CHUNE (GENRE)\n");
                         p("\n==========================\n");
                         p("\nMythology ke liye 1 dabayein (Pauranik).");
                         p("\nAction ke liye 2 dabayein (Action).");
                         p("\nSci-Fi ke liye 3 dabayein (Vighyan-katha).\n");
                         p("\nApna Chunav darz karayein : ");
                         s("%d",&gen);
	                   	 
	                   	  if(gen==1)
	                   	  {
	                   	  	p("\nAPNI MYTHOLOGY(PAURANIK) MOVIE CHUNE \n");
	        	            p("\n ===================================\n");
	                    	p("\nBramhastra ke liye 1 dabayein.");
	        	            p("\nRam Setu ke liye 2 dabayein.");
	                    	p("\nAdipurush ke liye 3 dabayein. \n");
	        	            p("\nApna Chunav Darz Karayein : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								       
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 1 bollywood english closed
						//gen 2 bollywood start-english
						else if(gen==2)
						{
							p("\nAPNI ACTION MOVIE CHUNE \n");
	        	            p("\n=======================\n");
	                    	p("\nJawaan ke liye 1 dabayein.");
	        	            p("\nPathan ke liye 2 dabayein.");
	                    	p("\nWar ke liye 3 dabayein.\n");
	        	            p("\nApna Chunav Darz Karayein : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 2 bollywood closed-english
						//gen 3 start bollywood english
						else if(gen==3)
						{
						        p("\nAPNI SCI-FI(VIGHYAN-KATHA) MOVIE CHUNE \n");
	        	                p("\n======================================\n");
	                     	   	p("\nKoi Mil Gayaa ke liye 1 dabayein.");
	        	                p("\nKrrishh ke liye 2 dabayein.");
	                    	    p("\nAction Replay ke liye 3 dabayein. \n");
	        	                p("\nApna Chunav Darz Karyein: ");
	                    	    s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	 p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 3  bollywod closed-HINDI
						
						else
            	        {
	            	      p("Amaanya Shaili Chuni Gayi-Dobara Prayas Kare.");
            	        } 
	               	}//industry 2-bollywood HINDI closed
	               	//industry 3 start-tollywood ENGLISH
	               	if(ind==3)
      	            {
      	            	 p("\nAPNI SHAILI CHUNEI\n");
	    	             p("\n==================\n");
	    	             p("\nMythology ke liye  dabayein.");
	    	             p("\nAction ke liye 2 dabayein.");
	    	             p("\nSci-Fi ke liye 3 dabayein.\n");
	    	             p("\nApna Chunav Darz KArayein : ");
	                   	 s("%d",&gen);
	                   	 
	                   	    if(gen==1)
	                   	    {
	                   	  	p("\nAPNI MYTHOLOGY(PAURANIK) MOVIE CHUNE\n");
	        	            p("\n====================================\n");
	                        p("\n Kannappa ke liye 1 dabayein.");
                            p("\n Maha Avatar Narsimha ke liye 2 dabayein.");
                            p("\n Mayabazaar ke liye 3 dabayein. \n");
                            p("\n Apna Chunav Darz Karayein : ");
                            s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	 p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 1 closed
						
						
						//gen 2 TOLLYWOOD start-HINDI
						else if(gen==2)
						{
							p("\nAPNI ACTION MOVIE CHUNE\n");
	        	            p("\n========================\n");
	                      	p("\nRRR ke liye 1 dabayein.");
	        	            p("\nPushpa ke liye 2 dabayein.");
	                    	p("\nKGF ke liye 3 dabayein.\n");
	        	            p("\nApna Chunav Darz Karayein : ");
	                    	s("%d",&mov);
	        	
	        	              if(mov >= 1 && mov <= 3)
	        	               {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	 p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	  p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 2 tollywood closed-english
						//gen 3 start tollywood english
						else if(gen==3)
						{
						    p("\nAPNI SCI-FI(VIGHYAAN-KATHA) MOVIE CHUNE\n");
	        	            p("\n=======================================\n");
	                    	p("\nPress 1 for Project K-Kalki.");
	        	            p("\npress 2 for 24.");
	                    	p("\npress 3 for Aditya 369. \n");
	        	            p("\nEnter your Choice : ");
	                    	s("%d",&mov);
	        	
	        	            if(mov >= 1 && mov <= 3)
	        	            {
	        	            	 p("\nAPNI SEAT KI KEEMAT CHUNE \n");
                                 p("\n=========================\n");
                                 p("\n1.250 rs ki seat ke liye 1 dabayein.\n");
                                 p("\n2.350 rs ki seat ke liye 2 dabayein.\n");
                                 p("\nApna Chunav Darz karayein : ");
                                 s("%d",&sp);
	        	                
	        	                if(sp >= 1 && sp <= 2)
	        	                {
	        	                	 p("\nSEAT KI SANKHYA CHUNE \n");
                                     p("\n====================\n");
                                     p("\n1.1 seat ke liye 1 dabayein.");
                                     p("\n2.2 seats ke liye 2 dabayein.");
                                     p("\n3.3 seats ke liye 3 dabayein.");
                                     p("\n4.4 seats ke liye 4 dabayein.");
                                     p("\n5.5 seats ke liye 5 dabayein.\n");
                                     p("\nApna Chunav Darz Karaayein: ");
                                     s("%d",&sea);
	        		                 
	        		                 if(sea >= 1 && sea <= 5)
	        		                 {
	        		                 	p("\nAPNE SNACKS CHUNE ");
                                          p("\n==================\n");
                                          p("\n1.French Fries ke liye 1 dabayein - 199 rs.");
                                          p("\n2.Sandwich ke liye 2 dabayein - 249 rs.");
                                          p("\n3.Nachos and Tacos ke liye 3 dabayein - 399 rs.");
                                          p("\n4.Coke ke liye 4 dabayein - 49 rs.");
                                          p("\n5.Combo (French fries aur Coke) ke liye 5 dabayein - 250 rs.");
                                          p("\n6.Combo (Nachos, Tacos, Coke aur Sandwich) ke liye 6 dabayein - 700 rs.\n");
                                          p("\n7.Agar kuch nahi chahiye to 7 dabayein.\n");
                                          p("\nApna Chunav Darz Karayein : ");
                                          s("%d",&snac);
	        		                    
	        		                    if(snac<1 || snac>7)//snacks invalidity checked
                                        {
                                            p("\nAmanya Nashtey Ke Vikalp Chuna Gaya-Dobara Prayas Kare.\n");
                                        }
                                        //maths start
                                        //seat pricing
                                        if(sp==1)
                                        {
                                           s_p=250;
										}
										else if(sp==2)
									    {
									 	   s_p=350;
									    }
									    else
									    {
									 	  s_p=0;
									    }
									    //snack pricing
									    if(snac==1)
									    {
									 	   sn_p=199;
									    } 
									    else if(snac==2)
									    {
									 	    sn_p=249;
									    }
									    else if(snac==3)
									    {
									 	    sn_p=399;
									    }
									    else if(snac==4)
									    {
									 	    sn_p=49;
									    }
									    else if(snac==5)
									    {
									 	    sn_p=250;
									    }
									    else if(snac==6)
									    {
									 	    sn_p=700;
									    }
									    else if(snac==7)
									    {
									 	    sn_p=00;
									    }
								        else 
									    {
									        sn_p=0;
								        }
								        
								        p("\n SUMMARY - BHUGTAAN SE PEHLE JAANCHLE  :\n");
								        p("\n Aapki Seat ki keemat : %d",s_p);
								        p("\n Kitni Seatein Chuni Gayi : %d",sea);
								        p("\n Aapke Nashte ki Keemat : %d",sn_p);
								        p("\n Kul Seaton ki Keemat : %.2f",se_co);
								        p("\n Kul Keemat -Bhugtaan Hetu : %.2f",tb);
									 
									}//no of seats 
									 else
            	                     {
	            	                    p("Amaanya Seat Sankhya Chuni Gayi-Dobara Prayas Kare.");
            	                     } 
							    }//seat pricing 
							    else
            	                {
	            	               p("Amaanya Seat Ki Keemat Chuni Gayi-Dobara Prayas Kare.");
            	                } 
							}//movie option
							else
            	            {
	            	           p("Amaanya Movie Chuni Gayi-Dobara Prayas Kare.");
            	            }
						}//gen 3  tollywood closed-hindi
						else
            	        {
	            	      p("Amaanya Shaili Chuni Gayi-Dobara Prayaas Kare.");
            	        } 
	               	}//industry 3 tollywood hindi closed
	               	else
            	    {
	            	  p("Amaanya Industry Chuni Gayi-Dobara Prayaas Kare.");
            	    } 
				}//time
				else
            	{
	            	p("Amaanya Samay Chuna Gaya-Dobara Prayaas Kare.");
            	} 
			}//venue
			else
        	{
	        	p("Amaanya Sthaan Chuna Gaya-Dobara Prayaas Kare.");
        	}
		}//area
		else
	    {
		   p("Amaanya Kshetra Chuna Gaya-Dobara Prayaas Kare.");
	    }
	}// hindi language brace closed
	
}//main function

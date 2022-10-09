#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	std::cout << "Please, enter a number:" << std::endl;
	std::cin >> k;
    int r = 0;
    r = k % 100;
    if (r == 0)
    {
        switch (k / 100)
        {
        case 1:
            std::cout << "sto bananov";
            break;

        case 2:
            std::cout << "dvesti bananov";
            break;

        case 3:
            std::cout << "trista bananov";
            break;

        case 4:
            std::cout << "chetyresta bananov";
            break;

        case 5:
            std::cout << "pyat'sot bananov";
            break;

        case 6:
            std::cout << "shest'sot bananov";
            break;

        case 7:
            std::cout << "sem'sot bananov";
            break;

        case 8:
            std::cout << "vosem'sot bananov";
            break;

        case 9:
            std::cout << "devyat'sot bananov";
            break;

        default:
            break;
        }
    }
    else
    {
        switch (k / 100)
        {
        case 1:
            std::cout << "sto ";
            break;

        case 2:
            std::cout << "dvesti ";
            break;

        case 3:
            std::cout << "trista ";
            break;

        case 4:
            std::cout << "chetyresta ";
            break;

        case 5:
            std::cout << "pyat'sot ";
            break;

        case 6:
            std::cout << "shest'sot ";
            break;

        case 7:
            std::cout << "sem'sot ";
            break;

        case 8:
            std::cout << "vosem'sot ";
            break;

        case 9:
            std::cout << "devyat'sot ";
            break;

        default:
            break;
        }

        if ((r >= 10) && (r < 20))
        {
            switch (r)
            {
            case 10:
                std::cout << "desyat' bananov";
                break;

            case 11:
                std::cout << "odinnadcat' bananov";
                break;

            case 12:
                std::cout << "dvenadcat' bananov";
                break;

            case 13:
                std::cout << "trinadcat' bananov";
                break;

            case 14:
                std::cout << "chetyrnadcat' bananov";
                break;

            case 15:
                std::cout << "pyatnadcat' bananov";
                break;

            case 16:
                std::cout << "shestnadcat' bananov";
                break;

            case 17:
                std::cout << "semnadcat' bananov";
                break;

            case 18:
                std::cout << "vosemnadcat' bananov";
                break;

            case 19:
                std::cout << "devyatnadcat' bananov";
                break;

            default:
                break;
            }
        }
        else
        {
            if ((k % 10) == 0)
            {
                switch (r / 10)
                {
                case 2:
                    std::cout << "dvadcat' bananov";
                    break;

                case 3:
                    std::cout << "tridcat' bananov";
                    break;

                case 4:
                    std::cout << "sorok bananov";
                    break;

                case 5:
                    std::cout << "pyat'desyat bananov";
                    break;

                case 6:
                    std::cout << "shest'desyat bananov";
                    break;

                case 7:
                    std::cout << "sem'desyat bananov";
                    break;

                case 8:
                    std::cout << "vosem'desyat bananov";
                    break;

                case 9:
                    std::cout << "devyanosto bananov";
                    break;

                default:
                    break;
                }

            }
            else
            {
                switch (r / 10)
                {
                case 2:
                    std::cout << "dvadcat' ";
                    break;

                case 3:
                    std::cout << "tridcat' ";
                    break;

                case 4:
                    std::cout << "sorok ";
                    break;

                case 5:
                    std::cout << "pyat'desyat ";
                    break;

                case 6:
                    std::cout << "shest'desyat ";
                    break;

                case 7:
                    std::cout << "sem'desyat ";
                    break;

                case 8:
                    std::cout << "vosem'desyat ";
                    break;

                case 9:
                    std::cout << "devyanosto ";
                    break;

                default:
                    break;
                }
                switch (k % 10)
                {
                case 1:
                    std::cout << "odin banan";
                    break;

                case 2:
                    std::cout << "dva banana";
                    break;

                case 3:
                    std::cout << "tri bananа";
                    break;

                case 4:
                    std::cout << "chetyre banana";
                    break;

                case 5:
                    std::cout << "pyat' bananov";
                    break;

                case 6:
                    std::cout << "shest' bananov";
                    break;

                case 7:
                    std::cout << "sem' bananov";
                    break;

                case 8:
                    std::cout << "vosem' bananov";
                    break;

                case 9:
                    std::cout << "devyat' bananov";
                    break;

                default:
                    break;
                }
            }
        }
    }
    return EXIT_SUCCESS;
}


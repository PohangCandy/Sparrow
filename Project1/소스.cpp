#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    // 그림이 그려지는 화면 생성
    RenderWindow window(VideoMode(600, 480), "LUNAR LANDER");
    window.setFramerateLimit(60);

    // 게임에 필요한 스프라이트 생성
    Texture t1;
    Sprite Background;
    t1.loadFromFile("images/background.png");
    Background.setTexture(t1);

    Texture t2; // 텍스트 객체
    Sprite lander; // 스프라이트 객체
    t2.loadFromFile("images/spaceship.png"); // 이미지 파일을 텍스처 객체로 적재한다.
    lander.setTexture(t2); // 스프라이트의 텍스처를 설정한다.


    // 여기서부터 게임 루프
    while (window.isOpen())
    {
        // 이벤트 검사 및 처리
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Left))
            lander.move(-10.0, 0.0);
        if (Keyboard::isKeyPressed(Keyboard::Right))
            lander.move(10.0, 0.0);


        // 화면을 지운다
        window.clear();
        // 화면에 스프라이트를 그린다
        window.draw(Background);
        window.draw(lander);
        // 화면을 표시한다
        window.display();
    }

    return 0;
}


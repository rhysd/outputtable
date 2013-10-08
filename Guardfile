guard :shell do
  watch %r{(^.+\.(?:hpp|cpp))$} do |m|
    Dir.glob('tests/**/*.cpp').each do |f|
      system "g++-4.8 -std=c++11 -Wall -Wextra #{f} -lboost_unit_test_framework && ./a.out && rm a.out"
    end
  end
end

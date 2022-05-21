mkdir ~/sheep_bin

curl -OL https://github.com/nodev918/ech/raw/master/release/ech.tar
tar -xvf ech.tar
mv ech ~/sheep_bin

echo "export PATH=\$PATH:\$HOME/sheep_bin" >> $HOME/.bash_profile
source $HOME/.bash_profile

ech hello
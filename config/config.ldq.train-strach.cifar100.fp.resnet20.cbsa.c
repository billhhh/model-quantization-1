
dataset='cifar100'
root=$FASTDIR/data/cifar

model='resnet20'
options="$options --width_alpha 0.25"

train_batch=128
val_batch=50

case='cifar100-ldn-stratch-fp-pytorch-order_c-wd1e-4-sgd_0'
keyword='cifar100,origin,cbsa,fix_pooling,singleconv,fix,ReShapeResolution,real_skip'

pretrained='None'
options="$options --pretrained $pretrained"

 options="$options --tensorboard"
 options="$options --verbose"
#options="$options -j2"
#options="$options -e"
 options="$options -r"
#options="$options --fp16 --opt_level O1"
 options="$options --wd 1e-4"
 options="$options --decay_small"
#options="$options --custom_lr_list alpha --custom_lr 1e-3"
 options="$options --order c"

 epochs=200
# SGD
 options="$options --lr 1e-1 --lr_policy custom_step --lr_decay 0.2 --lr_custom_step 60,120,160 --nesterov"

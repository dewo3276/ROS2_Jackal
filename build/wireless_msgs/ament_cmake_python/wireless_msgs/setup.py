from setuptools import find_packages
from setuptools import setup

setup(
    name='wireless_msgs',
    version='1.0.1',
    packages=find_packages(
        include=('wireless_msgs', 'wireless_msgs.*')),
)

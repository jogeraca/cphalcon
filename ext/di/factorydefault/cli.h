
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_di_factorydefault_cli_ce;

PHALCON_INIT_CLASS(Phalcon_DI_FactoryDefault_CLI);

PHP_METHOD(Phalcon_DI_FactoryDefault_CLI, __construct);

PHALCON_INIT_FUNCS(phalcon_di_factorydefault_cli_method_entry){
	PHP_ME(Phalcon_DI_FactoryDefault_CLI, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_FE_END
};


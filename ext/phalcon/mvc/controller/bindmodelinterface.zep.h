
extern zend_class_entry *phalcon_mvc_controller_bindmodelinterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Mvc_Controller_BindModelInterface);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_controller_bindmodelinterface_getmodelname, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_mvc_controller_bindmodelinterface_getmodelname, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_mvc_controller_bindmodelinterface_method_entry) {
	ZEND_FENTRY(getModelName, NULL, arginfo_phalcon_mvc_controller_bindmodelinterface_getmodelname, ZEND_ACC_STATIC|ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_FE_END
};

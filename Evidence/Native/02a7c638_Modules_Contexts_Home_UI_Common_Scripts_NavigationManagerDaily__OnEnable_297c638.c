/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$OnEnable
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnEnable (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$OnEnable
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnEnable
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnEnable_297c638(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000005c2d735 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c0cd8);
    FUN_012d0dc8(PTR_DAT_057db410);
    FUN_012d0dc8(PTR_DAT_0577ff90);
    FUN_012d0dc8(PTR_DAT_057c32d8);
    FUN_012d0dc8(PTR_DAT_057b9b50);
    FUN_012d0dc8(PTR_DAT_057770e0);
    bRam0000000005c2d735 = 1;
  }
  puVar2 = PTR_DAT_057c0cd8;
  puVar1 = PTR_DAT_0578b048;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x20),0,*(undefined8 *)PTR_DAT_057c0cd8);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057b9b50,0), lVar4 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar4,lVar5,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x20),1,*(undefined8 *)puVar2);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057c32d8,0),
           lVar4 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                    (lVar4,lVar5,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x20),2,*(undefined8 *)puVar2);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if ((lVar5 != 0) &&
               (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_0577ff90,0),
               lVar4 != 0)) {
              Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                        (lVar4,lVar5,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x20),3,*(undefined8 *)puVar2);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if ((lVar5 != 0) &&
                   (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057770e0,0),
                   lVar4 != 0)) {
                  Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                            (lVar4,lVar5,0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                      (*(long *)(param_1 + 0x20),4,*(undefined8 *)puVar2);
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if ((lVar5 != 0) &&
                       (System_Action___ctor_21239bc
                                  (lVar5,param_1,*(undefined8 *)PTR_DAT_057db410,0), lVar4 != 0)) {
                      if ((bRam0000000005c3941f & 1) == 0) {
                        FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
                        bRam0000000005c3941f = 1;
                      }
                      puVar1 = PTR_DAT_0578b048;
                      lVar8 = *(long *)(lVar4 + 0x38);
                      while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar8,lVar5,0),
                             plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar1))) {
                        lVar7 = FUN_01351224((long *)(lVar4 + 0x38),plVar6,lVar8);
                        bVar3 = lVar8 == lVar7;
                        lVar8 = lVar7;
                        if (bVar3) {
                          return;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d1288(plVar6);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$OnDestroy
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnDestroy (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$OnDestroy
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnDestroy
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__OnDestroy_2add6ec
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0579ad98;
  if ((bRam0000000005c2eafb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ad98);
    FUN_012d0dc8(PTR_DAT_057dc9d8);
    bRam0000000005c2eafb = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action_object____ctor_1647468(lVar2,param_1,*(undefined8 *)PTR_DAT_057dc9d8,0),
     lVar4 != 0)) {
    Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__remove_OnTokenSelected_2add790
              (lVar4,lVar2);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (plVar3 = *(long **)(*(long *)(param_1 + 0x28) + 0x20), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02bdd788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

